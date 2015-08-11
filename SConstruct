env = Environment(
	CCFLAGS = ['-Wall', '-g'],
)

sources = [
]

env.Program('bin/hcdisk2', [
	'src/%s' % src for src in sources
] + [
	'nop.cpp',
])
