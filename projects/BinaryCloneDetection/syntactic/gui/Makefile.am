include $(top_srcdir)/config/Makefile.for.ROSE.includes.and.libs

if ROSE_USE_QT
if ROSE_USE_SQLITE_DATABASE

bin_PROGRAMS = binaryCloneGui

binaryCloneGui_SOURCES = \
	binaryCloneMainGui.C \
        binaryCloneGui.C

binaryCloneGui_LDADD = $(ROSE_LIBS) $(QT_LDFLAGS) $(QROSE_LDFLAGS)

if !ROSE_BUILD_OS_IS_OSX
	binaryCloneGui_LDADD += -lrt
endif

AM_CPPFLAGS = $(ROSE_INCLUDES) $(BOOST_CPPFLAGS) -I.
AM_LDFLAGS = $(ROSE_RPATHS)


compass_parameters:
	cd .. && $(MAKE) compass_parameters
	cp -f ../compass_parameters .

CLEANFILES = 


endif

endif

EXTRA_DIST = binaryCloneGui.h disks.xpm  folder.xpm  icons.h 

