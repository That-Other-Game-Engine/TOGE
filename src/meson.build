toge_sources = ['toge.cpp', 'debug.cpp']
lib_args = ['-DBUILDING_TOGE', '-D_CRT_SECURE_NO_WARNINGS']
togelib = shared_library('toge',
                         toge_sources,
                         include_directories : inc,
                         dependencies : [thread_dep],
                         install : false,
                         cpp_args : lib_args,
                         gnu_symbol_visibility : 'hidden',)
