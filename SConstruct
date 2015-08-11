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
	'CFileSystem.cpp',
	'CFileArchive.cpp',
	'CFileArchiveTape.cpp',
	'DiskBase.cpp',
	'DiskImgRaw.cpp',
	'edsk.cpp',
	'dsk.cpp',
	'CFSOpus.cpp',
	'CFSCPMHC.cpp',
	'CFSCPM.cpp',
	'CFSTRDSCL.cpp',
	'CFSCPMPlus3.cpp',

	'Tape/tap.cpp',
	'Tape/TapeBlock.cpp',
	'Tape/TZX.cpp',
]

env.Program('bin/hcdisk2', [
	'src/%s' % src for src in sources
] + [
	'nop.cpp',
])
