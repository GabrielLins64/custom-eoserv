<h1>Custom EOServ</h1>

This is a custom version of EOServ (acknowledgements to Julian Smythe) for purely study and hobby purposes.
The .ini files in `data` and `config` directories aren't owned by me, and they will be modified.

---

- [Installation (Linux)](#installation-linux)
  - [Install the dependencies:](#install-the-dependencies)
  - [Obtain the source](#obtain-the-source)
  - [Compiling](#compiling)
- [Running the server](#running-the-server)

---

# Installation (Linux)

For installation on Windows, just download the newest version at [EOServ official site](https://eoserv.net/download).

## Install the dependencies:

```
$ sudo apt-get install g++ make cmake-curses-gui cmake-qt-gui \
libsqlite3-dev libmariadb-client-lgpl-dev subversion
```

## Obtain the source

Can be just cloning this repo:

`$ git clone https://github.com/GabrielLins64/custom-eoserv.git`

or downloading it's newest version from the [original site](http://files.eoserv.net/snaps/)

## Compiling

`cd` into the project's directory and do:

```
$ cmake .
$ sudo make install
```

# Running the server

`$ ./eoserv`

To compile it after changing the code, just do:

`$ make`

and restart the server.
