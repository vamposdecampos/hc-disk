env = Environment(
	CCFLAGS = ['-Wall', '-g'],
)

sources = [
	'CFileSpectrum.cpp',
	'CFileHC.cpp',
	'CFileCPM.cpp',
	'CFile.cpp',
	'CFileTRD.cpp',
	'CFilePlus3.cpp',
]

env.Program('bin/hcdisk2', [
	'src/%s' % src for src in sources
] + [
	'nop.cpp',
])
