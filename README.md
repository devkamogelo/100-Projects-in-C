# 100 C / Raylib Projects

> A structured journey through C and Raylib — from your first `printf` to building a game engine.

![Language](https://img.shields.io/badge/language-C-blue)
![Projects](https://img.shields.io/badge/projects-100-green)
![Levels](https://img.shields.io/badge/level-beginner%20→%20advanced-orange)

---

## About

A curated collection of 100 hands-on C projects, designed to take you from absolute zero to writing real, working programs. Every project builds on the last — no jumps, no gaps. The later phases introduce [Raylib](https://www.raylib.com/) for 2D/3D graphics, simulations, and game development.

Whether you're here to learn C systematically or just want something fun to build on the side, there's a project for you. Beginners will find a clear path forward. Experienced developers can skip to whatever phase challenges them.

---

## Before You Start

- A C compiler — GCC or Clang (both free)
- A text editor — VS Code, Vim, or anything you prefer
- A terminal — that's it. No IDE required.
- Phases 3 and beyond require [Raylib](https://www.raylib.com/) installed

> **Already know C?** Jump to **Phase 3** for Raylib basics, **Phase 4** for mini games, or **Phase 7** if you want the deep end.

---

## Phases Overview

| Phase | Topic | Projects |
|-------|-------|----------|
| [Phase 1](#phase-1--c-fundamentals) | C Fundamentals | 1 – 14 |
| [Phase 2](#phase-2--data-structures--algorithms) | Data Structures & Algorithms | 15 – 28 |
| [Phase 3](#phase-3--raylib-basics) | Raylib Basics | 29 – 42 |
| [Phase 4](#phase-4--mini-games) | Mini Games | 43 – 58 |
| [Phase 5](#phase-5--networking--systems) | Networking & Systems | 59 – 68 |
| [Phase 6](#phase-6--raylib-simulations) | Raylib Simulations | 69 – 83 |
| [Phase 7](#phase-7--advanced--capstone) | Advanced & Capstone | 84 – 100 |

---

## Phase 1 — C Fundamentals

*Projects 1 – 14 · No prior C knowledge needed*

| # | Project | Concepts |
|---|---------|----------|
| 01 | Hello, World | stdio, compilation |
| 02 | Variables & arithmetic | int, float, operators |
| 03 | User input (scanf) | stdin, format strings |
| 04 | If / else branching | conditionals |
| 05 | Loops — FizzBuzz | for, while |
| 06 | Functions & return values | modularity |
| 07 | Arrays & iteration | indexing, loops |
| 08 | Strings (char arrays) | strlen, strcpy |
| 09 | Pointers intro | *, &, dereferencing |
| 10 | Structs | custom types |
| 11 | File I/O (read & write) | fopen, fclose |
| 12 | Dynamic memory (malloc/free) | heap allocation |
| 13 | Linked list (singly) | nodes, next pointers |
| 14 | Command-line args | argc, argv |

---

## Phase 2 — Data Structures & Algorithms

*Projects 15 – 28 · Intermediate C*

| # | Project | Concepts |
|---|---------|----------|
| 15 | Stack (array-based) | LIFO, push/pop |
| 16 | Queue (array-based) | FIFO, enqueue/dequeue |
| 17 | Hash table (chaining) | hash fn, collision |
| 18 | Binary search tree | insert, search, delete |
| 19 | Sorting algorithms | bubble, merge, quick |
| 20 | Recursion — Tower of Hanoi | base case, stack |
| 21 | Graph BFS & DFS | adjacency list |
| 22 | Pathfinding — Dijkstra | shortest path |
| 23 | Matrix operations library | 2D arrays |
| 24 | Arena allocator | memory management |
| 25 | Circular buffer | ring buffer |
| 26 | Trie (prefix tree) | strings |
| 27 | LRU cache | doubly linked list |
| 28 | Red-black tree (basic) | balanced BST |

---

## Phase 3 — Raylib Basics

*Projects 29 – 42 · Requires [Raylib](https://www.raylib.com/)*

| # | Project | Concepts |
|---|---------|----------|
| 29 | Open a window + draw shapes | raylib setup |
| 30 | Bouncing ball | velocity, collision |
| 31 | Keyboard-controlled rectangle | input, delta time |
| 32 | Mouse follower with trail | mouse pos, array |
| 33 | Sprite sheet animation | texture, frames |
| 34 | Simple tilemap renderer | 2D array map |
| 35 | Timer & score UI overlay | DrawText, HUD |
| 36 | Particle system (emitter) | struct array, rand |
| 37 | Sound effects integration | LoadSound, play |
| 38 | Game state machine | enum states |
| 39 | Camera2D follow player | Camera2D |
| 40 | AABB collision detection lib | rect overlap |
| 41 | Simple font rendering tool | custom fonts |
| 42 | Scene / screen manager | function pointers |

---

## Phase 4 — Mini Games

*Projects 43 – 58 · Build real, playable games*

| # | Project | Concepts |
|---|---------|----------|
| 43 | Pong (two player) | classic arcade |
| 44 | Snake | grid, deque |
| 45 | Breakout / Arkanoid | ball, bricks |
| 46 | Space Invaders clone | waves, bullets |
| 47 | Asteroids clone | rotation, wrap |
| 48 | Flappy Bird clone | pipes, gravity |
| 49 | Platformer (one level) | gravity, jump |
| 50 | Top-down dungeon crawler | rooms, enemies |
| 51 | Tetris clone | rotation, lines |
| 52 | Memory card flip game | grid, reveal |
| 53 | Infinite runner | scroll, generation |
| 54 | Tower defense (basic) | path, waves |
| 55 | Turn-based tactics (grid) | AP, turn logic |
| 56 | Bullet hell prototype | patterns, performance |
| 57 | Procedural level gen | BSP / drunkard walk |
| 58 | Save / load system (binary) | fwrite, fread |

---

## Phase 5 — Networking & Systems

*Projects 59 – 68 · Low-level and OS programming*

| # | Project | Concepts |
|---|---------|----------|
| 59 | TCP echo server (sockets) | BSD sockets |
| 60 | Multi-client server (select) | select(), fd_set |
| 61 | HTTP/1.1 GET parser | raw HTTP |
| 62 | Simple HTTP server (static files) | serve html |
| 63 | UDP ping-pong | UDP, latency |
| 64 | Terminal chat app (client + server) | ncurses / raw |
| 65 | Thread pool | pthreads |
| 66 | Lock-free queue (CAS) | atomics |
| 67 | Memory-mapped file reader | mmap |
| 68 | Mini shell (fork / exec / pipe) | process management |

---

## Phase 6 — Raylib Simulations

*Projects 69 – 83 · Visual systems and algorithms*

| # | Project | Concepts |
|---|---------|----------|
| 69 | Conway's Game of Life | cellular automata |
| 70 | Boids flocking simulation | alignment, cohesion |
| 71 | Gravity / N-body sim | force, integration |
| 72 | Fluid sim (grid-based) | advection, diffuse |
| 73 | Verlet cloth simulation | constraints |
| 74 | Soft body physics | springs, mesh |
| 75 | Rigid body AABB physics | impulse, resolve |
| 76 | A* pathfinding visualiser | open/closed sets |
| 77 | Procedural terrain (Perlin) | noise, heightmap |
| 78 | Cellular cave gen + raycast | bitmasking |
| 79 | 2.5D raycaster (Wolfenstein-style) | DDA algorithm |
| 80 | Reaction-diffusion sim | Gray-Scott model |
| 81 | Fractal explorer (Mandelbrot) | complex math |
| 82 | Sorting algorithm visualiser | bar chart animation |
| 83 | Neural net visualiser (XOR) | forward pass vis |

---

## Phase 7 — Advanced & Capstone

*Projects 84 – 100 · Engine architecture and shipped projects*

| # | Project | Concepts |
|---|---------|----------|
| 84 | ECS (entity component system) | data-oriented design |
| 85 | Retained-mode UI library | widget tree, events |
| 86 | Immediate-mode UI (imgui-style) | ID stack, draw |
| 87 | 3D renderer (software, no GPU) | perspective, z-buffer |
| 88 | OBJ model loader + renderer | 3D mesh |
| 89 | Scripting layer (Lua embed) | lua_State |
| 90 | Hot-reload system (dlopen) | shared lib swap |
| 91 | Asset pipeline tool (CLI) | pack, compress |
| 92 | Networked multiplayer game | UDP, game state |
| 93 | Dedicated game server | authoritative sim |
| 94 | Profiler + flame chart | performance, timing |
| 95 | Custom allocator (slab) | pool allocator |
| 96 | Data-oriented particle system | SoA layout |
| 97 | Map editor (save/load levels) | editor tooling |
| 98 | Full 2D game (polished) | capstone game |
| 99 | Game engine core (mini) | engine architecture |
| 100 | Port project to WebAssembly | emscripten |

---

## Project Structure

Each project lives in its own folder:

```
projects/
├── 01-hello-world/
│   ├── README.md      ← task description + what you'll learn
│   ├── solution.c     ← reference solution (try it yourself first!)
│   └── hints.md       ← nudges if you get stuck, not spoilers
├── 02-variables/
│   └── ...
```

---

## Contributing

Found a bug? Have a project idea that fits the progression? Contributions are welcome — open an issue or submit a PR.

---

*Star the repo if it helped you ⭐*
