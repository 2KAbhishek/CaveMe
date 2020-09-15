# CaveMe

![Size](https://img.shields.io/github/repo-size/2kabhishek/CaveMe?style=plastic&color=0f0&label=Size)
![Updated](https://img.shields.io/github/last-commit/2kabhishek/CaveMe?style=plastic&color=f00&label=Updated)
![Stars](https://img.shields.io/github/stars/2kabhishek/CaveMe?style=plastic&color=ffc801&label=Stars)
![Forks](https://img.shields.io/github/forks/2kabhishek/CaveMe?style=plastic&color=003cff&label=Forks)
![Watchers](https://img.shields.io/github/watchers/2kabhishek/CaveMe?style=plastic&color=ff5500&label=Watchers)
![Contributors](https://img.shields.io/github/contributors/2kabhishek/CaveMe?style=plastic&color=f0f&label=Contributors)
![License](https://img.shields.io/github/license/2kabhishek/CaveMe?style=plastic&color=555&label=License)

CaveMe is a text adventure game that reminds you of an era long gone.

## Prerequisites

Before you begin, ensure you have met the following requirements:

- You have installed the latest version of gcc, awk for the game.
- Graphviz for generating the map.

## Installing CaveMe

To install CaveMe, follow these steps:

```bash
git clone https://github.com/2kabhishek/CaveMe.git
cd CaveMe
make
```

This will generate the caveme binary and a map.png in the `bin` directory.

## Running CaveMe

To run CaveMe, follow these steps:

```bash
cd bin
./caveme
```

## Gameplay Instructions

Similar to old school text based RPGs, use keywords to do various actions.

Implemented actions include:

- look
- go
- give
- drop
- ask
- inventory
- quit
