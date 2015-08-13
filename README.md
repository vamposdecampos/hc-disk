# hc-disk

"HCDisk is a tool able to transfer files to and from several file systems
Specific to the Sinclair Spectrum computer and clones." Originally written
by George Chirtoaca for win32.  This repo contains a fork which aims to port
it to Linux.

Check out the [readme](src/HCDisk2EN.txt) and [upstream website]
(https://sites.google.com/site/georgechirtoaca/projects).

The (Linux) build system uses [SCons](http://www.scons.org/).  To build, run
"scons".  If a i686-w64-mingw32 toolchain is installed, a win32 binary may
be cross-compiled as well.
