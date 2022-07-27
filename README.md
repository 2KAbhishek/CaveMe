<div align = "center">

<h1><a href="https://2kabhishek.github.io/CaveMe">BareMinimum</a></h1>

<a href="https://github.com/2KAbhishek/CaveMe/blob/main/LICENSE">
<img alt="License" src="https://img.shields.io/github/license/2kabhishek/CaveMe?style=flat&color=eee&label="> </a>

<a href="https://github.com/2KAbhishek/CaveMe/graphs/contributors">
<img alt="People" src="https://img.shields.io/github/contributors/2kabhishek/CaveMe?style=flat&color=ffaaf2&label=People"> </a>

<a href="https://github.com/2KAbhishek/CaveMe/stargazers">
<img alt="Stars" src="https://img.shields.io/github/stars/2kabhishek/CaveMe?style=flat&color=98c379&label=Stars"></a>

<a href="https://github.com/2KAbhishek/CaveMe/network/members">
<img alt="Forks" src="https://img.shields.io/github/forks/2kabhishek/CaveMe?style=flat&color=66a8e0&label=Forks"> </a>

<a href="https://github.com/2KAbhishek/CaveMe/watchers">
<img alt="Watches" src="https://img.shields.io/github/watchers/2kabhishek/CaveMe?style=flat&color=f5d08b&label=Watches"> </a>

<a href="https://github.com/2KAbhishek/CaveMe/pulse">
<img alt="Last Updated" src="https://img.shields.io/github/last-commit/2kabhishek/CaveMe?style=flat&color=e06c75&label="> </a>

</div>

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
# For getting a map of the game
make map
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
