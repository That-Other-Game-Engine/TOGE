project('toge', 'cpp',
  version : '0.1.0',
  default_options : ['warning_level=3', 'cpp_std=c++2a'])

inc = include_directories('include')

thread_dep = dependency('threads')

subdir('include')
subdir('src')
subdir('test')

# # These arguments are only used to build the shared library
# # not the executables that use the library.
# lib_args = ['-DBUILDING_CODE']

# shlib = shared_library('code', 'code.cpp',
#   install : true,
#   cpp_args : lib_args,
#   gnu_symbol_visibility : 'hidden',
# )

# test_exe = executable('code_test', 'code_test.cpp',
#   link_with : shlib)
# test('code', test_exe)

# # Make this library usable as a Meson subproject.
# code_dep = declare_dependency(
#   include_directories: include_directories('.'),
#   link_with : shlib)

# # Make this library usable from the system's
# # package manager.
# install_headers('code.hpp', subdir : 'code')

pkg_mod = import('pkgconfig')
pkg_mod.generate(
  name : 'libtoge',
  filebase : 'libtoge',
  description : 'Meson sample project.',
  version : '0.1.0',
)
