# Admin commands:

### Informational Commands

$info character - Displays basic info about an online character (stats etc.)
$inventory character - Shows the contents of an online character's inventory
$uptime - Shows how long since the server started
Map/Player Control Commands
$kick character - Kicks a player from the server. They can log back in immediately
$skick character - Same as $kick, but without a server announcement
$jail character - Warps a player to the jail specified in the server configuration
$sjail character - Same as $jail, but without a server announcement
$ban character time - Kicks a player from the server and prevents them logging back in for the specified time. Example time values are: 5m, 1h, 2w, forever
$sban character time - Same as $ban, but without a server announcement
$mute character - Stops a character from being able to talk for 90 seconds
$smute character - Same as $mute, but without a server announcement
$warp map x y - Warps you to the specified map and coordinates
$warpmeto character - Warps you to an online character's position
$warptome character - Warps an online character to your position
$hide - Hides you from the online player list and map. Say again to deactivate
$evacuate - Evacuates the map, jailing non-admins who don't leave before 30 seconds
$remap - Reloads a map if the map file has changed
$arena - Forces the arena on the current map to be launched immediately
Server Control Commands
$shutdown - Cleanly shuts down the server
$rehash - Reloads all configuration files
$repub - Reload pub files. (WARNING: This command is buggy for players online)

### Debug Commands

$sitem id [amount] - Spawns an item in your inventory
$ditem id [amount [x y]] - Drops an item from your inventory on the floor (including "lore" items), optionally at the specified position
$snpc id [amount] - Spawns one (or the specified amount) of an npc with the given ID on the map
$learn id [skilllevel] - Teaches you the spell with the specified ID at the specified level (0 to 100)
Novelty Commands
$quake [strength] - Shakes the map at the specified strength (1 to 8)

### Character Modification Commands

$setlevel character level - Sets the character's level to the specified value
$setexp character level - Sets the character's experience points to the specified value
$setstr character level - Sets the character's str level to the specified value
$setint character level - Sets the character's int level to the specified value
$setwis character level - Sets the character's wis level to the specified value
$setagi character level - Sets the character's agi level to the specified value
$setcon character level - Sets the character's con level to the specified value
$setcha character level - Sets the character's cha level to the specified value
$setstatpoints character points - Sets the character's available stat points to the specified value
$setskillpoints character points - Sets the character's available skill points to the specified value (Buggy: Character must relog to see them)
$setadmin character level - Sets an online character to the specified Admin_Level. You can only change the admin level of people with a lower admin level than you!
$setfiance character [name] - Sets the fiance of a character (the name of the player you are authorized to marry)
$setpartner character [name] - Sets the partner of a character
$sethome character [home] - Sets the home location of a character. The name corresponds to the id-name given in home.ini
$setgender character gender - Sets the gender of the character (0 = female, 1 = male)
$sethairstyle character hairstyle - Sets the hair style ID of the character
$sethaircolor character haircolor - Sets the hair color ID of the character
$setrace character skin - Sets the skin ID of the character
$setguildrank character rank - Sets the character's rank in their guild (0 = founder, 1 = leader, 2 = recruiter, 3-9 = member)
$setkarma character karma - Sets the karma of the character (0 to 2000)
$setclass character classid - Sets the class ID of the character
$settitle character [title] - Sets the title of the character
$strip character - Unequips all of the items an online character is wearing

### Maps ids:

1= Sheep Area #1 (Newbie Ship)

2= Sheep Area #2

3= Farmer's House

4= Aeven Temple

5= Aeven

6= Inner Temple

7= Malone Outlet

8= Imperial Castle (Throne Room)

9= Imperial Castle (West Hall Way)

10= Imperial Castle Basement

11= West Woodlands

12= Imperial Garden

13= Beach

14= Aeven Pub

15= Aeven Church

16= Aeven Port

17= Beach Secret (Sand Castle)

18= Sewers

19= Snow Mountain #1

20= Aeven Pub Basement

21= Admin Meeting Room

22= Ice Bar

23= Boulebard

24= Aeven Grocery

25= Aeven House (4 Beds)

26= Aeven Clothes Store (Female)

27= Aeven Clothes Store (Male)

28= Road to Aeven #1

29= Centaur

30= Centaur Church

31= Void

32= Void Zone

33= Admin Zone

34= Desert

35= Somewhere (Beach Void)

36= Somewhere (Beach Void)

37= Death Cave

38= ITEM TEST AREA 1

39= Road to Stronghold #1

40= Road to Stronghold #2

41= Swamps

42= Uddylia Gardens

43= Uddylia Gardens 2

44= Path to Fire Void

45= Fire Void

46= Arena (Red)

47= Castle Maze

48= Estaq (Stronghold)

49= Estaq (Stronghold)

50= Dreamworld House

51= Barber Shop

52= Beach

53= Sand Secret

54= Ancient Enterence

55= Ancient Centre

56= Desert Pot Shop

57= Desert House #1

58= Desert House #2

59= Ancient Shop

60= Ancient West

61= Swamp (East #2, Mummy Crypt Enterence)

62= Mummy Crypt

63= Ancient North

64= Ancient East

65= Event Area

66= Goat Farm House #1

67= Goat Farm House #2

68= Estaq Inn

69= Aeven Armory (In Malone Outlet)

70= Aeven Inn

71= Sky Wonder

72= Sky House

73= Sky Wonder Path

74= Secret Enterence (Path to Castle Basement)

75= Cyclops (Butterflies)

76= Prison (Jail Cells)

77= Snow Mountain #2

78= Cyclops Cave

79= Crypt (Basement of Mummy Crypt)

80= --- (Don't go, character becomes un-usable)

81= --- (Don't go, character becomes un-usable)

82= Swamp (East #1, Snakes)

83= Swamp (East #3, Wingo)

84= Aeven Bank (Bank #1)

85= Aeven Inn Hall

86= Aeven Inn (Room #1)

87= Aeven Inn (Room #2)

88= Aeven Inn (Room #3)

89= Aeven Juwelery

90= Aeven Bank (Bank #2)

91= Aeven Shoe/Sandals Shop

92= Aeven Hat Shop

93= Aeven Staff Shop

94= Aeven Creepy House (Witch)

95= Centaur Shoe Shop

96= Centaur Hat Shop

97= Centaur Bank

98= Centaur Armory

99= Aeven Port Clothes Shop (male)

100= Aeven Port Clothes Shop (female)

101= Skeleton Crypt Enterence

102= Skeleton Crypt

103= Snow Mountain Enterence

104= Hell Church Enterence

105= Swamp East #3 House (Puppets)

106= Aeven Disco

107= Race Track (Big map, x:200, y:200, race track in center)

108= Aeven Guild House

109= Death Cave (Reaper Room)

110= Snow Mountain House #2

111= Snow Mountain House #1

112= Snow Mountain House #3

113= Illusion House (Room below Illusion Shop)

114= Ice Cave

115= Estaq Bank (Stronghold)

116= Cyclops Cave

117= Bird Fortress

118= Marbles Temple

119= Apozen's Lair

120= Road to Boulebard

121= Marble Woods

122= Ant Area #1

123= Ant Area #2

124= Bat Cave

125= Marble Temple Shop

126= Ant Area #3

127= Twark Ruins

128= Dreamworld #1

129= Dreamworld #2

130= Dreamworld #3

131= Dreamworld #4

132= Dreamworld #5

133= Dreamworld #6

134= Dreamworld #7 (Chest Room)

135= Ice Cave #2

136= Hall of Pain (All)

137= Combat Room #1

138= Combat Room #1

139= Imperial Castle (East Hall Way)

140= Desert #2

141= Dizzy Desert

142= Ice Cave #3

143= Ice Cave #4

143= Ice Cave #5

144= Ice Cave #6

145= Centaur Spawn

146= Centaur Enterence (Mushrooms)

147= East of Centaur Enterence (Snails)

148= Geggime Forest

149= Ewalk Dungeon (Under Geggime Forest)

150= Blobsie Garden

151= Halowdale

152= Haunted Mansion (Floor #1)

153= East of Halowdale (Goats)

154= Back Stage + Art Stage

155= Octo's Lair

156= Aeven Skill Master

157= Aeven Marriage Registration

158= Death Cave #2

159= Path to Anundo #1

160= Path to Anundo #2

161= Anundo

162= Anundo Skill Master

163= Anundo Leader House

164= Anundo Armory

165= Josand

166= East Josand

167= Joseh's House

168= Woods of Despare #1

169= Woods of Despare #2

170= Woods of Despare #3 (Maze Start)

171= Woods of Despare #4

172= Woods of Despare #5

173= Woods of Despare #6

174= Woods of Despare #7

175= Secret Bird Fortress

176= Woods of Despare #8

177= Woods of Despare #9

178= Gnome Forest #1

179= Gnome Forest #2

180= Gnome Cave

181= Port Naqid

182= Port Naqid #2 (Jesaurus)

183= Imperial Castle (Blue Arena #1)

184= Imperial Castle (Blue Arena #2)

185= --- (Don't go, character becomes un-usable)

186= West Woodlands

187= Sheep Area #3

188= Killing Grounds (PK) Enterence

189= Reactor Shaft

190= Newb Area #1

191= Newb Area #2

192= Newb Starting House

193= Newb Shop

194= Newb Area #3

195= Newb Area #4

196= Newb Area #5

197= Newb Area #6

198= Newb Bat Cave

199= Newb House

200= Estaq Inn (Floor #2)

201= Estaq Guild House

202= Anundo Guild House

203= Anundo Bank

204= Anundo Inn

205= Centaur Inn

206= Centaur Inn (Floor #2)

207= Factory Enterence

208= Control Centre

209= Crazy Factory

210= New Swamp

211= Halodale Grocery

212= Halodale Guild House

213= Halodale Bank

214= Halodale House

215= Halodale Armory

216= Halodale Bard

217= Halodale Inn

218= Halodale Inn (Floor #2)

219= Halodale Church

220= New Swamp Serf/Pandu

221= Hell Church

222= Hell Maze

223= --- (Don't go, character becomes un-usable)

224= Single Boat (Single Boat, Pirate Quest)

225= Boat Bridged to Boat (Pirate Quest)

226= 1st Boat Cabin

227= 2nd Boat Cabin

228= Vulture Island

229= Pyramid King Wurm Room

230= Illusion Tombes

231= Treasure Room

232= Sheep Area #4

233= Cyclops Cave #2

234= Death Cave #3

235= Haunted Mansion (Floor #2)

236= Haunted Mansion (Floor #3)

237= Haunted Mansion (Floor #4)

238= Puppet Dungeon

239= Pjedro's House

240= Pjedro's House

241= Abonded Fort

242= Underground Fort

243= Ancient East #2

244= Ancient East #3

245= Killing Grounds (PK)

246= Haunted Mansion (Floor #5)

247= Haunted Mansion (Floor #6)

248= Aeven Bank Interlink (Bank 1/2 Basement)

249= Grocery Storage

250= DreamWorld #8 (Bogo Man)

251= Atlantis House #1 (Floor #2)

252= Pheonix Field

253= Pig Farm House

254= Atlantis Pathway

255= Atlantis

256= Atlantis House #2 (Floor #1)

257= Atlantis House #2 (Floor #2)

258= Atlantis House #3

259= Atlantis House #1 (Floor #1)

260= New Swamp #2 (Vines)

261= Swamp Mansion (Room #1)

262= Swamp Mansion (Room #2)

263= Swamp Mansion (Room #3)

264= --- (Don't go, character becomes un-usable)

265= Flowie/ESpring Forest #1

266= Flowie/ESpring Forest #2

267= Nutviper/Espring Forest

268= Path to Dragon Cave

269= Dragon Cave Enterence

270= Dragon Cave

271= --- (Don't go, character becomes un-usable)

272= --- (Don't go, character becomes un-usable)

273= Ancient Wraith Enterence (Haunted Mansion (Floor #7))

274= Mole Farm House

275= Swamp Mansion (Room #4)

276= --- (Don't go, character becomes un-usable)

277= Ancient Wraith Room

278= Lottery Game

### Items ids

Apozen Overlord (257) 6666

Apozen's Taraduda (256) 92

Ancient Wraith (255) 369

Monkey (249) 36

Tarentuda (248)88

Teawcusar (246) 2

Teawkasar (245) 90

Ape (244) 66

Lizzy (243) 23

Fish (242)20

Mole (241) 1

Hamster (240)

20

Artist (239)

1216

Mini Army (238)

17

Alex Borg (233)

1

Tenba (232)

82

Piglet (231)

6

Piglet (230)

5

Rabther (229)

1

Onigiri (228)

1

Vitaman (227)

146

Flyman (226)

117

Dragon (225)

1251

Nutviper (224)

96

Flowy (223)

58

Cacadem (222)

17

Rotveig (220)

68

Espring (218)

77

Bale (217)

118

Phoenix (216)

91

Flombie (214)

50

Butter (212)

2

Drone Flyer (210)

69

Banshi (209)

120

Yeti (208)

80

Dark Magician (207)

90

Christmas Doll (206)

78

Baby Turtle (205)

18

Shark (204)

40

Earth Rock +60 (203) 159

Earth Rock +1 (202) 120

Rock (201) 120

Doll (198) 5

War Bear (194)

3

Shaman (191)

60

Wraith (187) 108

Wraith (186) 77

Wraith (185) 50

Hell Flyer (184)

90

Bone Spider (183)

120

Gnoll (182)

216

Tomb Mummy (181) 40

Imperial Sea Guard (178) 28

King Wurm (174)

210

Puppet (173)

67

Blocto (172)

18

Biter (171)

81

Sheep (170)

22

Princess (151)

150

Proto (149)

432

Sav 109 (147)

56

Cyto 053 (146)

44

Crane (145)

138

Chest (143)

18

Apozen (142)

750

Dwarf Warrior (141)

73

Twin Demon (140)

90

Swamp Monster (139)

170

Headless Hunter (138)

50

Angry Vine (137)

168

Imp (136)

67

Imp (135)

67

Cursed Mask (134)

122

Butterfly (133)

90

Bogo Man (132)

90

Optica (131)

66

Swamp Goblin (130)

34

Hell Guardian (129)

1500

Drunken Pirate (128)

92

Drunken Pirate (127)

92

Ninja Guard (125)

20

King (123)

150

King (122)

150

Carnivo (121)

40

Anundo Leader (120) 270

Tentacle (119)

20

Octopus (118)

330

Orc (117)

38

Wraith (113) 32

Azuorph (105)

90

Ewak (104)

28

Geggime (103)

34

Snail (102)

20

Snail (101)

20

Taewcus (98)

22

Mushroom (97)

14

Stone Gollem (96)

150

Rock (95)

80

Gnome Rider (94)

41

Gnome (93)

23

Ice Crystal (92)

26

Ice Giant (91)

48

Hedgehog (90)

15

Jesaurus (89)

36

Teawk (86)

32

Ant Soldier (85) 55

Ant Worker (84) 38

Worm (83)

25

Wurm (82) 17

Bat (81)

13

Stinger (80)

22

Bullfrog (79)

14

Bullfrog (78)

9

Bullfrog (77)

16

Wolfman (74)

24

Inferno (73)

67

Birdman Guard (72)

16

Birdman Captain (71)

50

Birdman Guard (70)

33

Birdman Worker (69)

18

Cyclops Guardian (68)

34

Blobsie (65)

15

Blobsie (64)

15

Blobsie (63)

15

Blobsie (62)

15

Blobsie (61)

15

Blobsie (60)

15

Blobsie (59)

15

Chaos Spawn (51)

100

Undeath (48)

13

Vyercil (47)

7

Lobster (35)

9

Wingo (20)

12

Skeleton Warrior (19)

12

Skeleton Warlock (18)

15

Skeleton (17)

10

Cyclops (14)

16

Penguin (13)

12

Cactusaur (12)

8

Barbarian (11)

11

Spider (10)

8

Reaper (9)

225

Centaur (8)

7

Goat (7)

8

Snake (6)

11

Fox (5)

6

Mummy (4)

6

Blob (3)

7

Rat (2)

5

Crow (1)

5

### Armor list

Dark Endura (female) (466)

1 1 EVA

10 TP

2 INT

2 WIS

Orona (Female) (465)

2 7 ACC

2 EVA

50 HP

1 STR

7 AGI

Pwep (Female) (464)

0 1 EVA

1 CHA

Nurse Outfit (Female) (463)

0 2 CHA

Docter Outfit (male) (462)

0 2 CHA

Tebar (male) (461)

1 1 EVA

Oron (male) (460)

2 7 ACC

2 EVA

50 HP

1 STR

7 AGI

Dracota (female) (459)

6 3 EVA

10 HP

2 STR

Draco (male) (458)

6 3 EVA

10 HP

2 STR

Cooks Uniform (male) (450)

0

Cooks Uniform (female) (449)

0

Baruta (female) (431)

5 1 EVA

Baru (male) (430)

5 1 EVA

Ketovu (female) (429)

4 2 EVA

10 HP

Ketova (Male)) (428)

4 2 EVA

10 HP

Dark Endur (male) (422)

1 1 EVA

10 TP

2 INT

2 WIS

Tebaru (female) (415)

1 1 EVA

Archery Armor (male) (414)

1 4 ACC

1 EVA

10 HP

5 AGI

Archery Armor (female) (413)

1 4 ACC

1 EVA

10 HP

5 AGI

Soccery Armor (male) (410)

1 1 EVA

30 TP

1 INT

1 WIS

Soccery Armor (female) (409)

1 1 EVA

30 TP

1 INT

1 WIS

Plaot Robes (male) (407)

1 1 EVA

Robe of Sanctum (male) (406)

1 1 EVA

50 TP

Hero Plate (female) (388)

4 1 ACC

2 EVA

25 HP

1 STR

Hero Plate (male) (387)

4 1 ACC

2 EVA

25 HP

1 STR

Buccanee (female) (381)

1 1 EVA

Elegant (male) (373) 3 2 EVA

Last Samurai (male) (372)

1 1 EVA

Buccanee (male) (371)

1 1 EVA

Heavy Eloffe (female) (370)

1 2 EVA

15 HP

3 STR

Heavy Eloff (male) (369)

1 2 EVA

15 HP

3 STR

Eleganta (female) (368)

3 2 EVA

Oblon Armor (male) (364)

1 3 EVA

School Costume (female) (348)

1 1 EVA

Kimono (female) (347)

1 1 EVA

Burk (male) (346)

1 1 EVA

Galoya (female) (345)

3 1 EVA

Galoy (male) (344)

3 1 EVA

Crusader Armor (female) (343)

1 2 EVA

Crusader Armor (male) (342)

1 2 EVA

Hula Hula Skirt (female) (333)

1 1 EVA

Hula Hula Pants (male) (332)

1 1 EVA

White Robes (female) (324)

1 1 EVA

Lotus Armor (female) (312)

2 3 EVA

Lotus Armor (male) (311)

2 3 EVA

Eloff (male) (280)

2 2 EVA

Eloffe (female) (279)

2 2 EVA

Ancient Plate (female) (275)

2 2 EVA

10 HP

Ancient Plate (male) (274)

2 2 EVA

20 HP

Royal Suit (male) (223)

1 2 EVA

10 HP

Royal Dress (female) (222)

1 2 EVA

10 HP

Elder Robes (female) (208)

10 10 ACC

10 EVA

100 HP

100 TP

Elder Robes (male) (204)

10 10 ACC

10 EVA

100 HP

100 TP

School uniform (female) (203)

1 1 EVA

Panda Costume(female) (202)

1 1 EVA

Turtle Costume (male) (201)

1 1 EVA

Devil Costume (male) (200)

1 1 EVA

Devil Costume (female) (199)

1 1 EVA

Tennu (female) (172)

1 1 EVA

Turtle Costume (male) (171)

1 1 EVA

Heavy Pants (male) (170)

1 1 EVA

Red Plate (male) (169)

1 1 EVA

Red Plate (female) (168)

1 1 EVA

Mystic Dress (female) (167)

1 1 EVA

Monk Pants (male) (166)

1 1 EVA

Dresca (male) (165)

1 1 EVA

Grey Dress(female) (164)

1 1 EVA

White Dress (female) (163)

1 1 EVA

Hero Plate (male) (158)

1 1 EVA

Ninja Suit (female) (157)

1 1 EVA

Dark Robes (male) (156)

1 1 EVA

Heavy Battle Plate (male) (155)

1 1 EVA

Light Battle Plate (male) (154)

1 1 EVA

Eternal Turtle (male/never comes off) (153) 1 1 EVA

Casual Dress (female) (152)

1 1 EVA

Peasant Clothes (female) (151)

1 1 EVA

Panda Costume (female) (150)

1 1 EVA

Holy Robes (famale) (149)

1 1 EVA

Rogue Cloak (female) (148)

1 1 EVA

Red Dress (female) (147)

1 1 EVA

Indian Robes (female) (146)

1 1 EVA

Gold Plate (female) (145)

1 1 EVA

Peasant Suit (male) (144)

1 1 EVA

Soldier Plate (male) (143)

1 1 EVA

Rogue Cloak (male) (142)

1 1 EVA

Warrior Plate (female) (141)

1 1 EVA

Ninja Dress (female) (140)

1 1 EVA

Priest Robes (male) (139)

1 1 EVA

Wardica Plate (female) (138)

1 1 EVA

Frella Dress (female) (137)

1 1 EVA

Thief clothes (male) (136)

1 1 EVA

Swordman Armor (female) (135)

1 1 EVA

Sweater (female) (134)

1 1 EVA

Tuxido (male) (133)

1 1 EVA

Forrest Robes (male) (132)

1 1 EVA

Cave Robes (male) (131)

1 1 EVA

Swift Armor (female) (130)

1 1 EVA

Gothic Dress (female) (129)

1 1 EVA

Wizzard Robes (male) (128)

1 1 EVA

Wizzard Robes (female) (127)

1 1 EVA

Dragon Armor (male) (60)

2 1 EVA

Dragon Armor (female) (59)

2 1 EVA

Stellino (female) (48)

1 1 EVA

Cleric Custome (male) (47)

1 1 EVA

Hat List-------------------------------------------------

Medic Cap (467)

Pirate Cap (452)

Glasses (451)

Cook Hat (448)

Flad Hat (443)

Hat of wonders (427)

Helmet of Darkness (426) 5 ACC

Golden Crown (411)

Chappy (392)

Horned Gob Helm (386)

Gob Helm (385)

Elegant Hat (359)

Hula Hula Hat (335)

Kitty Hat (334)

Lotus Helmet (330)

Beruta (315) 10 TP

Pirate Hat (314)

Pilotte (313)

Frog Head (310) 5 ACC

Air hat (298) 2 ACC

Eloff Helmet (289)

Christmas Hat (273)

Helmy (247)

White sumurai (246)

Merchant Hat (198)

Dragon Mask (197)

Samurai Hat (196)

Red Scarf (195)

Black Scarf (194)

Purple Scarf (193)

Red Hood (192)

Green Hood (191)

Blue Hood (190)

Brown Hood (189)

Black Hood (188)

Mystic Hat (187)

Bandana (186)

Bandana (185)

Bandana (184)

Bandana (183)

Bandana (182)

Fairy Hat (181)

Chainmail Hat (180)

Horned Hat (179)

Purple Enchanted Hat (178)

Black Enchanted Hat (177)

Blue Enchanted Hat (176)

Purple Magical Hat (175)

Black Magical Hat (174)

Blue Magical Hat (173)

Shield/wings List-----------------------------------------------------

Oak Shield (453) 2 10 HP

1 CON

Fire Force Wings (446) 10 10 ACC

10 EVA

100 HP

100 TP

10 - 10 Damage

Good Force Wings (445) 10 10 ACC

10 EVA

100 HP

100 TP

10 - 10 Damage

Wooden Protector (432)

Fire Arrows (425) 4 ACC

2 - 6 Damage

Frost Arrows (424) 4 ACC

2 - 6 Damage

Normal Arrows (423) 1 ACC

1 - 3 Damage

Lotus Protector (417)

Royal Protector (416)

Bag (408)

Good Wings (384) 10 10 ACC

10 EVA

100 HP

100 TP

10 STR

10 INT

10 WIS

10 AGI

10 CON

10 CHA

10 - 20 Damage

Hickory (380)

Quaria (379)

Chalybs (378)

Guard Shield (209)

Dark Protector (57)

Wooden Protector (56)

Round Iron Shield (55)

Kite Shield (53)

Iron Shield (52)

Weapon List-------------------------

Fan (468)

0 - 0 0 4 AGI

8 CHA

Scav Bow (457)

2 - 2 2

Saw Sword (456)

1 - 8 9 1 STR

Bazar Staff (455)

2 - 2 0 10 HP

150 TP

3 INT

6 WIS

Jack Spear (454) 2 - 3 1

Kontra (444)

2 - 3 2

Mitova (436)

1 - 2 1

Merhawk (435)

2 - 2 2

Chains (434)

1 - 4 2

Adger (433)

1 - 2 1

Lens Of Truth (421)

4 - 7 3 10 HP

50 TP

Chopper (420)

1 - 3 2 1 STR

Battle Spear (393)

1 - 3 1

Gabrasto (391)

1 - 2 1

Fladdat Staff (390)

1 - 3 1

Knob Staff (389)

3 - 5 1 10 HP

25 TP

Rapier (366)

1 - 2 1

Gun (365)

1 - 2 1

Fluon Sword (363)

1 - 2 1

Ablo Staff (362)

1 - 3 1

Gastro (361)

1 - 3 1

War Axe (360)

2 - 2 2

Flail (352)

1 - 2 3

Battle Spear (351)

2 - 2 1

Guitar (350)

0 - 0 0

Harp (349)

0 - 0 0

Cava Staff (329)

1 - 2 1

Lefor Mace (328)

1 - 3 2

Twin Blades (327)

1 - 8 3 1 STR

Hockey Stick (325)

1 - 2 1

Reaper (317)

1 - 3 2

Crossbow (316)

1 - 1 0

Bow (297)

1 - 1 0

Cresent Staff (290)

1 - 2 1

Reaper Scyth (288)

1 - 2 1

Dark Blade (287)

2 - 5 5

Killing Edge (286)

1 - 3 1

Cristal Sword (285)

1 - 2 3

Lotus Sword (284)

1 - 3 7

Gold Defender (283)

1 - 2 2

Ice Blade (282)

1 - 2 3

Ultima Blade (281)

1 - 7 4

Warlock Sword (272)

1 - 2 3

Hand Sickle (271)

1 - 2 1

Magical Trident (270)

1 - 2 1

Whip (269)

1 - 2 1

Pole Arm (245)

1 - 2 3

Light Katana (238)

1 - 3 1

Thors Hammer (225)

0 - 0 1

Jewel Staff (224)

1 - 2 1

Normal Sword (207)

1 - 2 3

Forrest Staff (206)

1 - 2 2

Aura Staff (205)

1 - 2 1

Dark Katana (38)

1 - 2 2

Dragon Blade (37)

1 - 2 1

Ancient Star (36)

1 - 2 1

Spirit Star (35)

1 - 2 1

Saber (34)

1 - 2 1

Holy Book (33)

1 - 2 1

Battle Axe (32)

1 - 2 2

Throw Axe (31)

1 - 2 1

Wood Axe (30)

1 - 2 1

Staff (29)

1 - 2 1

Spear (28)

1 - 2 1

Small Sword (27)

1 - 2 2

Sai (26)

1 - 2 1

Ninchackus (25)

1 - 2 1

Big ugly Mace (24)

1 - 2 1

Luna Staff (23)

1 - 2 1

Ancient Sword (22)

1 - 2 2

Dagger (21)

1 - 2 1

Broom (20)

1 - 2 1

Broadsword (19)

1 - 2 2

Lance (18)

1 - 2 1

Other Equip List----------------------------------

Leather Bracer (54) 1

Golden Elf Braclet (40) 1 1 EVA

10 HP

Silver Elf Braclet (39) 1 EVA

5 HP

Love Ring (374)

Golden Ring (42) 30 HP

Silver Ring (41) 15 HP

Necro Necklace (51) 10 TP

Emerald Necklace (50) 10 HP

1 STR

Skull Belt (44) 50 TP

1 INT

1 WIS

Leather Belt (43) 1 EVA

10 HP

2 AGI

2 CON

War Charm (237)

Guardian Charm (236)

Magic Charm (235)

Dark Gem (234)

Green Gem (233)

Luna Gem (232)

Orange Gem (231)

Red Gem (230)

Pink Gem (229)

Purple Gem (228)

Blue Gem (227)

Yellow Gem (226)

Light Crystal (79)

Fire Crystal (78)

Air Crystal (77)

Eternal Crystal (76)

Element Crystal (75)

Forest Crystal (74)

Dark Crystal (73)

Earth Crystal (72)

Water Crystal (71)

Death Gloves (267) 1 1 EVA

Iron Gloves (266) 1 1 EVA

Leather Gloves (58) 1

Leather Gloves (49) 1

Steel Boots (447) 1 1 EVA

White Sandals (383)

White Boots (382)

Ancient Boots (276)

Royal Boots (268)

Blue Enchanted Boots (126)

Green Enchanted Boots (125)

Red Enchanted Boots (124)

Grey Sandals (123)

Dark Sandals (122)

Black Sandals (121)

Yellow Sandals (120)

Yellow Sandals (119)

Yellow Sandals (118)

Green Sandals (117)

Green Sandals (116)

Green Sandals (115)

Pink Sandals (114)

Purple Sandals (113)

Purple Sandals (112)

Purple Sandals (111)

Red Sandals (110)

Red Sandals (109)

Red Sandals (108)

Brown Sandals (107)

Brown Sandals (106)

Brown Sandals (105)

Blue Sandals (104)

Blue Sandals (103)

Blue Sandals (102)

Grey Boots (101)

Dark Boots (100)

Black Boots (99)

Yellow Boots (98)

Yellow Boots (97)

Yellow Boots (96)

Green Boots (95)

Green Boots (94)

Green Boots (93)

Pink Boots (92)

Purple Boots (91)

Purple Boots (90)

Purple Boots (89)

Red Boots (88)

Red Boots (87)

Red Boots (86)

Brown Boots (85)

Brown Boots (84)

Brown Boots (83)

Blue Boots (82)

Blue Boots (81)

Blue Boots (80)

Other Items" List---------------------------------

Cure Potion (13)

Black Hair Dye (221)

White Hair Dye (220)

Luna Hair Dye (219)

Purple Hair Dye (218)

Blue Hair Dye (217)

Blond Hair Dye (216)

Red Hair Dye (215)

Pink Hair Dye (214)

Green Hair Dye (213)

Brown Hair Dye (212)

Potion of Terror (296)

Potion of Evil (295)

Potion of Sparkles (294)

Potion of Celebrate (293)

Potion of Love (292)

Potion of Flames (291)

Big Fairysoda (211)

Small Fairysoda (210)

Wraith Key (242)

Crystal Key (241)

Silver Key (240)

Normal Key (239)

Scroll Of Art (367)

Scroll of Guilds (331)

Shopkeeper #2 (244)

Shopkeeper #1 (243)

Scroll Of Void (69)

Scroll Of Castle (68)

Scroll Of Stronghold (67)

Scroll Of Centaur (66)

Scroll Of Recall (65)

Scroll Of Ancient (64)

Scroll Of Event (63)

Scroll Of Beach (62)

Scroll Of Admin (no value) (61)

Pickle (442) 5 HP

Brush (441) 5 HP

Berry (440) 5 HP

Banana (439) 5 HP

Apple (438) 5 HP

Ananas (437) 5 HP

Elixer (377) 120 HP

40 TP

Big Mana Potion (376) 25 TP

Big Health Potion (375) 100 HP

Small Bread (162) 4 HP

Apple (161) 5 HP

Herbs (46) 6 HP

Dark Potion (16) 10 HP

10 TP

Brown Potion (10) 1 HP

1 TP

Green Potion (9) 20 HP

10 TP

Mana Potion (5) 10 TP

Health Potion (4) 50 HP

small Mana Potion (3) 5 TP

small Health Potion (2) 20 HP

Gold (1)

Piggy (483)

Borg Metal (482)

Pencil (481)

Flowies (480)

Butter (479)

Spring (478)

Tenba Bag (477)

Ape Fur (476)

Fish (475)

Aqua Hand (474)

Viper Eye (473)

Ancient Bone (472)

Dead Flies (471)

Dragon Wing (470)

Dragon Claw (469)

Scroll Of Truth (419)

Aztec Crown (418)

Old Treasure Map (412)

Monster Flesh (405)

Robot Chain (404)

Vine Tentacle (403)

Twin Horn (402)

Handcuff (401)

Imp Stings (400)

Green Crystal (399)

Crane (398)

Metal Part (397)

Orc Ear (396)

Leaves (395)

Optica Batwing (394)

Mushroom (358)

Snail Tie (357)

Snail House (356)

Taewcus Tentacle (355)

Geggime Fur (354)

Ewak Legs (353)

Gnome Doll (341)

Gnome Hat (340)

Golom Stone (339)

Ice Cube (338)

Ice Gem (337)

Blue Star (336)

Needles (326)

Teawk Tentacle (323)

Ant Legs (322)

Wurm Head (321)

Worm Segment (320)

Bat Wing (319)

Stinger Eye (318)

Frog Scrubs (309)

Wolfman Fur (308)

Green Blob (307)

Navy Blob (306)

Yellow Blob (305)

Pink Blob (304)

Purple Blob (303)

Red Blob (302)

Blue Blob (301)

Horse Hoof (300)

Bird Feather (299)

Dark rag (278)

Vyercil tentacles (277)

Wingo Claw (265)

Beatle Fangs (264)

Barbarian Ear (263)

Skeleton Rib (262)

Skeleton Bone (261)

Cyclops Eye (260)

Penguin Meat (259)

Goat Horn (258)

Spider Leg (257)

Spider Eyes (256)

Centaur Hoof (255)

Snake Rattle (254)

Snake Teeth (253)

Fox Fur (252)

Mummy Bandage (251)

Blob Slime (250)

Rat Tail (249)

Crow Claw (248)

Event Item (160)

Event Item (159)

Scroll Of Nothing (70)

Train Ticker (45)

Elemental Potion (17)

Royal Potion (15)

Skeleton Skull (14)

Orc Skull (12)

Orb of Light (11)

Canvas Bag (8)

Love Letter (7)

Flower Bouquet (6)

Spell List------------------------------

Green Flame (31)

green flame

Shell (30)

shell heal 1

Dark Bite (29)

darness come to me damage 2 - 2

Magic Whirl (28)

magic whirl heal 100

Power Wind (27)

power wind damage 3 - 3

Tentacles (26)

tentacles damage 2 - 2

Fire Blast (25)

fire blast damage 2 - 2

Dark Skull (24)

darkness come to me damage 1 - 2

Dark Hand (23)

darkness come to me damage 1 - 2

Dark Beam (22)

dark beam heal 1

Ice Blast (21)

ice blast damage 1 - 1

heal 1

Heaven (20)

heavens judgement heal 1000

Boulders (19)

boulders damage 30 - 40

Aura (18)

protection heal 10

Bard (17)

bard mode

Whirl (16)

tornado damage 15 - 150

heal 1

Energy Ball (15)

energy ball damage 4 - 9

Ice Blast (14)

ice blast damage 1 - 300

heal 1

Ring of Fire (13)

fire ring heal 1

Attack Shield (12)

attack shield damage 1 - 1

Magic Shield (11)

magic shield heal 1

Fire Ball (10)

fire from the sky damage 1 - 55

Ultima Blast (9)

ultima blast damage 10 - 30

Large Heal (8)

large heal heal 50

Medium Heal (7)

medium heal heal 25

Admin Heal (6)

admin love heal 5000

Small Thunder (5)

small thunder damage 3 - 4

Small Fire (4)

small fire damage 1 - 5

Group Heal (3)

group heal heal 20

Small Heal (2)

small heal heal 10

Heal Self (1)

heal self heal 4

Class List--------------------------------

High Priest (8)

Summoner (7)

Warrior (6)

Archer (5)

Rogue (4)

Magician (3)

Priest (2)

Peasant (1)
