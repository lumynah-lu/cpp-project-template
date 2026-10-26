# cpp-project-template

[![CI](https://github.com/OWNER/cpp-project-template/actions/workflows/ci.yml/badge.svg)](https://github.com/OWNER/cpp-project-template/actions/workflows/ci.yml)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

A modern, production-ready C++17 project template: modern CMake, GoogleTest unit tests,
clang-format code style, and cross-platform CI (Ubuntu / macOS / Windows).

## Features

- C++17, modern target-based CMake (3.16+)
- Library + executable + examples layout
- GoogleTest unit tests with CTest
- `compile_commands.json` for clangd
- Cross-platform GitHub Actions CI
- Install rules

## Project layout

```
include/template/   Public headers
src/                Library and application sources
tests/              GoogleTest unit tests
examples/           Library usage examples
.github/workflows/  CI pipeline
```

## Build

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

Run the application:

```bash
./build/bin/cpp_template_app
```

## Test

```bash
ctest --test-dir build --output-on-failure
```

## Install

```bash
cmake --install build --prefix /your/prefix
```

## License

Released under the [MIT License](LICENSE).
