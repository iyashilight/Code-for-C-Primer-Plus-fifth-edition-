# C++ Primer Plus (5th Edition) — Exercise Solutions

> **English** | [中文](README.md)

Answers and solution notes for the programming exercises in *C++ Primer Plus (5th Edition)*.

Every exercise gets its own commit and is organised by **chapter branches**, so the reasoning behind each solution can be followed step by step.

## Branches

| Branch | Content | Commits |
| --- | --- | --- |
| [`Chapter-Two`](https://github.com/iyashilight/Code-for-C-Primer-Plus-fifth-edition-/commits/Chapter-Two) | Chapter 2 exercises | 6 |
| [`Chaper-Three`](https://github.com/iyashilight/Code-for-C-Primer-Plus-fifth-edition-/commits/Chaper-Three) | Chapter 3 exercises (branch name keeps its original spelling) | 6 |
| `master` | Shared experiments and the CMake skeleton (`main.cpp`) | — |

Organising principles:

- **A branch** represents a chapter or a purpose
- **A commit** represents a single exercise within that chapter
- Each commit solves exactly one exercise, never mixing several at once

## Usage

```bash
git clone git@github.com:iyashilight/Code-for-C-Primer-Plus-fifth-edition-.git
cd Code-for-C-Primer-Plus-fifth-edition-

# list all branches
git branch -a

# switch to a chapter
git checkout Chapter-Two

# read through the solutions commit by commit
git log --oneline
git show <commit>
```

## Build (master branch)

A CMake version per `CMakeLists.txt` and a C++20-capable compiler are required:

```bash
cmake -B build -S .
cmake --build build
./build/My_Study        # Windows: .\build\Debug\My_Study.exe
```

## Notes

- This repository is a personal learning record and does not aim for production-grade completeness
- The code is an honest log of the learning process; later chapters will follow the same structure

## License

Released under [GPL-3.0](LICENSE).
