env = Environment(
	CCFLAGS = ['-Wall', '-g'],
	CPPDEFINES = ['_DZ80_EXCLUDE_SCRIPT'],
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
	'DiskImgCQM.cpp',
	'edsk.cpp',
	'dsk.cpp',
	'CFSOpus.cpp',
	'CFSCPMHC.cpp',
	'CFSCPM.cpp',
	'CFSTRDSCL.cpp',
	'CFSCPMPlus3.cpp',
	'CFSCobraDEVIL.cpp',
	'CFSMGT.cpp',
	'CFSTRD.cpp',

	'Tape/tap.cpp',
	'Tape/TapeBlock.cpp',
	'Tape/TZX.cpp',

	'FileConverters/BasicDecoder.cpp',
	'FileConverters/scr2gif.c',
	'FileConverters/dz80/dissz80.c',
	'FileConverters/dz80/loadfile.c',
	'FileConverters/dz80/noscript.c',
	'FileConverters/dz80/tables.c',
]

env.Program('bin/hcdisk2', [
	'src/%s' % src for src in sources
] + [
	'nop.cpp',
])
