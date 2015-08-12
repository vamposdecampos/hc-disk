Import('env')

conf = env.Configure()
ok = conf.CheckCC() and conf.CheckCXX()
conf.Finish()

if not ok:
	Return()

sources = [
	'main.cpp',

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
	'DiskWin32Stub.cpp',
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
	'FileConverters/dz80/dissz80.c',
	'FileConverters/dz80/loadfile.c',
	'FileConverters/dz80/noscript.c',
	'FileConverters/dz80/tables.c',
]

if 'win' in env.subst('$variant'):
	sources.extend([
		'Tape/Wave.cpp',
		'Tape/Tape2Wave.cpp',
	])
	env.Append(
		LIBS = ['winmm'],
	)

env.Program('hcdisk2', [
	'src/%s' % src for src in sources
])
