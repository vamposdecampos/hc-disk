env = Environment(
	CCFLAGS = ['-Wall', '-g'],
	CPPDEFINES = ['_DZ80_EXCLUDE_SCRIPT'],
)

envs = [
	env.Clone(
		variant='native',
	),
	env.Clone(
		variant='win32',
		cross='i686-w64-mingw32-',
		CC='${cross}gcc',
		CXX='${cross}g++',
		LD='${cross}g++',
		PROGSUFFIX='.exe',
		LINKFLAGS=[
			'-static-libgcc',
			'-static-libstdc++',
			'-static',
			'-pthread',
		],
	),
]

for env in envs:
	env.SConscript('SConscript',
		exports = 'env',
		variant_dir = 'bin/$variant',
		duplicate = 0)
