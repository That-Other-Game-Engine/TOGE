# That Other Game Engine
[![Build Status](https://github.com/That-Other-Game-Engine/TOGE/actions/workflows/compile-cross-platform.yml/badge.svg)](https://github.com/That-Other-Game-Engine/TOGE/actions/workflows/compile-cross-platform.yml)

## Development Configuration instructions
- if you do not already have a builddir configured run
    - `meson build-gcc` or `CXX=clang++ meson build-clang` depending on your prefered build system, TOGE works with either
- run `ninja -C build-<gcc or clang>` or `meson -C build-<gcc or clang>
- run the provided testexe or copy the `.dll` or `.so` file

## Todo
Todo:
- [ ] write initiation functions
- [ ] finish debug functions
- [ ] support audio
- [ ] support image loading
- [ ] support model loading
- [ ] support mipmaps
- [ ] write a wrapper for the library for another language
    - [ ] Push all of the Logging functions into a single polymorphic function

I hope everyone can enjoy this and maybe even contribute
