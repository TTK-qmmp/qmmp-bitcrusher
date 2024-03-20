This is a plugin for Qmmp (1.6.0 or greater) which supports bitcrusher effect.

The following packages are required, including development headers,
which some vendors split into separate packages:

• qmmp (1.x or 2.x)
• qt (5 for qmmp 1.x and 6 for qmmp 2.x)

To build, run Qt's qmake:

If you are building for qmmp 1.x, run:
$ qmake-qt5
And if you are building for qmmp 2.x, run:
$ qmake-qt6

Then build with make:
$ make

To install:
$ make install

This installs the plugin into Qmmp's effect plugin directory.  To install
to a staging area, such as for packaging:

$ make install INSTALL_ROOT=/path/to/staging
