
/* $Id: guild.hpp 534 2016-06-17 06:58:15Z Sausage $
 * EOSERV is released under the zlib license.
 * See LICENSE.txt for more info.
 */

#ifndef GUILD_HPP_INCLUDED
#define GUILD_HPP_INCLUDED

#include "fwd/guild.hpp"

#include "fwd/character.hpp"
#include "fwd/world.hpp"

#include <algorithm>
#include <array>
#include <ctime>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

/**
 * Serialize an array of 9 ranks in to a string that can be restored with RankUnserialize
 */
std::string RankSerialize(std::array<std::string, 9> list);

/**
 * Convert a string generated by RankSerialze back to a list of 9 ranks
 */
std::array<std::string, 9> RankUnserialize(std::string serialized);

/**
 * Represents a member in a guild
 */
class Guild_Member
{
	public:
		std::string name;
		int rank;
		std::string rank_string;

		Guild_Member(std::string name_, int rank_ = 9, std::string rank_string_ = "")
			: name(name_)
			, rank(std::max(0, std::min(9, rank_)))
			, rank_string(rank_string_)
		{ }
};

/**
 * Temporary structure used when creating a new guild
 */
class Guild_Create : public std::enable_shared_from_this<Guild_Create>
{
	public:
		int id;
		GuildManager *manager;
		Character *leader;
		std::string tag;
		std::string name;
		std::vector<std::shared_ptr<Guild_Member>> members;

		Guild_Create(GuildManager *manager, std::string tag, std::string name, Character *leader);

		Guild_Member *GetMember(std::string character);
		void AddMember(std::string character, int rank = 9);

		~Guild_Create();
};

/**
 * Manages when to load and save guild data
 */
class GuildManager
{
	public:
		bool cache_clearing;
		std::unordered_map<std::string, std::weak_ptr<Guild>> cache;
		std::unordered_map<std::string, std::weak_ptr<Guild_Create>> create_cache;
		World *world;

		GuildManager(World *world_) : cache_clearing(false), world(world_) { }

		std::shared_ptr<Guild> GetGuild(std::string tag);
		std::shared_ptr<Guild> GetGuildName(std::string name);
		std::shared_ptr<Guild_Create> GetCreate(std::string tag);
		std::shared_ptr<Guild_Create> BeginCreate(std::string tag, std::string name, Character *leader);
		void CancelCreate(std::string);
		std::shared_ptr<Guild> CreateGuild(std::shared_ptr<Guild_Create>, std::string description);

		void SaveAll();

		bool ValidName(std::string name);
		bool ValidTag(std::string tag);
		bool ValidRank(std::string rank);
		bool ValidDescription(std::string description);
};

/**
 * Stores guild information and references to online members
 * Created by the World object when a member of the guild logs in, and destroyed when the last member logs out
 */
class Guild : public std::enable_shared_from_this<Guild>
{
	public:
		GuildManager *manager;
		std::string tag;
		std::string name;
		std::vector<std::shared_ptr<Guild_Member>> members;
		std::array<std::string, 9> ranks;
		std::time_t created;
		std::string description;
		int bank;
		bool needs_save;

		Guild(GuildManager *manager_) : manager(manager_), created(0), bank(0), needs_save(false) { }
		Guild(const Guild&) = delete;

		void AddMember(Character *joined, Character *recruiter, bool alert = false, int rank = 9);
		void DelMember(std::string kicked, Character *kicker = 0, bool alert = false);

		std::string GetRank(int rankno) { return ranks[std::max(0, rankno - 1)]; }
		void SetRank(int rankno, std::string rank) { ranks[std::max(0, rankno - 1)] = rank; }
		void SetMemberRank(std::string name, int rank);

		void AddBank(int gold);
		void DelBank(int gold);

		void Disband(Character *disbander);

		std::shared_ptr<Guild_Member> GetMember(std::string name);

		void SetDescription(std::string);

		void Msg(Character *from, std::string message, bool echo = true);

		void Save();

		~Guild();
};

#endif // GUILD_HPP_INCLUDED
