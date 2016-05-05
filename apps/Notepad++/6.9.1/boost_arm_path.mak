BOOSTPATH=C:\code\boost_1_60_0
BOOSTLIBPATH=C:\code\boost_1_60_0\bin.v2\libs\regex\build\msvc-12.0


SOBJS=\
	$(SOBJS)\
	$(DIR_O)\BoostRegexSearch.obj\
	$(DIR_O)\UTF8DocumentIterator.obj
	
LOBJS=\
	$(LOBJS)\
	$(DIR_O)\BoostRegexSearch.obj\
	$(DIR_O)\UTF8DocumentIterator.obj


INCLUDEDIRS=$(INCLUDEDIRS) -I$(BOOSTPATH)

CXXFLAGS=$(CXXFLAGS) -DSCI_OWNREGEX

LDFLAGS=$(LDFLAGS) -LIBPATH:$(BOOSTLIBPATH)

$(DIR_O)\UTF8DocumentIterator.obj:: ../boostregex/UTF8DocumentIterator.cxx
	$(CC) $(CXXFLAGS) -c ../boostregex/UTF8DocumentIterator.cxx	
	
$(DIR_O)\BoostRegexSearch.obj:: ../boostregex/BoostRegexSearch.cxx ../src/CharClassify.h ../src/RESearch.h	
	$(CC) $(CXXFLAGS) -c ../boostregex/BoostRegexSearch.cxx