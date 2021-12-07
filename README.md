# That Other Game Engine

## Development Configuration instructions
- if you do not already have a builddir configured run
    - `meson build-gcc` or `CXX=clang++ meson build-clang` depending on your prefered build system, TOGE works with either
- run `ninja -C build-<gcc or clang>`
- run the provided testexe or copy the `.dll` or `.so` file

## Todo
Todo:
- [ ] write a wrapper for the library for another language
    - [ ] Push all of the Logging functions into a single polymorphic function
