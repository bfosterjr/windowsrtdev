# Microsoft Developer Studio Generated NMAKE File, Based on libapriconv.dsp
!IF "$(CFG)" == ""
CFG=libapriconv - Win32 Debug
!MESSAGE No configuration specified. Defaulting to libapriconv - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "libapriconv - Win32 Release" && "$(CFG)" != "libapriconv - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "libapriconv.mak" CFG="libapriconv - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "libapriconv - Win32 Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "libapriconv - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

!IF  "$(CFG)" == "libapriconv - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\libapriconv.dll"

!ELSE 

ALL : "libapr - Win32 Release" "$(OUTDIR)\libapriconv.dll"

!ENDIF 

!IF "$(RECURSE)" == "1" 
CLEAN :"libapr - Win32 ReleaseCLEAN" 
!ELSE 
CLEAN :
!ENDIF 
	-@erase "$(INTDIR)\iconv.obj"
	-@erase "$(INTDIR)\iconv_ces.obj"
	-@erase "$(INTDIR)\iconv_ces_euc.obj"
	-@erase "$(INTDIR)\iconv_ces_iso2022.obj"
	-@erase "$(INTDIR)\iconv_int.obj"
	-@erase "$(INTDIR)\iconv_module.obj"
	-@erase "$(INTDIR)\iconv_uc.obj"
	-@erase "$(INTDIR)\libapriconv.res"
	-@erase "$(INTDIR)\libapriconv_src.idb"
	-@erase "$(INTDIR)\libapriconv_src.pdb"
	-@erase "$(OUTDIR)\libapriconv.dll"
	-@erase "$(OUTDIR)\libapriconv.exp"
	-@erase "$(OUTDIR)\libapriconv.lib"
	-@erase "$(OUTDIR)\libapriconv.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MD /W3 /Zi /O2 /I "./include" /I "../apr/include" /D "NDEBUG" /D "API_DECLARE_EXPORT" /D "WIN32" /D "_WINDOWS" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\libapriconv_src" /FD /c 

.c{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

MTL=midl.exe
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /o /win32 "NUL" 
RSC=rc.exe
RSC_PROJ=/l 0x409 /fo"$(INTDIR)\libapriconv.res" /i "./include" /i "../apr/include" /d "NDEBUG" /d "APR_VERSION_ONLY" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\libapriconv.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=kernel32.lib advapi32.lib /nologo /base:"0x6EE50000" /subsystem:windows /dll /incremental:no /pdb:"$(OUTDIR)\libapriconv.pdb" /debug /out:"$(OUTDIR)\libapriconv.dll" /implib:"$(OUTDIR)\libapriconv.lib" /opt:ref 
LINK32_OBJS= \
	"$(INTDIR)\iconv.obj" \
	"$(INTDIR)\iconv_ces.obj" \
	"$(INTDIR)\iconv_ces_euc.obj" \
	"$(INTDIR)\iconv_ces_iso2022.obj" \
	"$(INTDIR)\iconv_int.obj" \
	"$(INTDIR)\iconv_module.obj" \
	"$(INTDIR)\iconv_uc.obj" \
	"$(INTDIR)\libapriconv.res" \
	"..\apr\Release\libapr.lib"

"$(OUTDIR)\libapriconv.dll" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "libapriconv - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\libapriconv.dll"

!ELSE 

ALL : "libapr - Win32 Debug" "$(OUTDIR)\libapriconv.dll"

!ENDIF 

!IF "$(RECURSE)" == "1" 
CLEAN :"libapr - Win32 DebugCLEAN" 
!ELSE 
CLEAN :
!ENDIF 
	-@erase "$(INTDIR)\iconv.obj"
	-@erase "$(INTDIR)\iconv_ces.obj"
	-@erase "$(INTDIR)\iconv_ces_euc.obj"
	-@erase "$(INTDIR)\iconv_ces_iso2022.obj"
	-@erase "$(INTDIR)\iconv_int.obj"
	-@erase "$(INTDIR)\iconv_module.obj"
	-@erase "$(INTDIR)\iconv_uc.obj"
	-@erase "$(INTDIR)\libapriconv.res"
	-@erase "$(INTDIR)\libapriconv_src.idb"
	-@erase "$(INTDIR)\libapriconv_src.pdb"
	-@erase "$(OUTDIR)\libapriconv.dll"
	-@erase "$(OUTDIR)\libapriconv.exp"
	-@erase "$(OUTDIR)\libapriconv.lib"
	-@erase "$(OUTDIR)\libapriconv.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MDd /W3 /GX /Zi /Od /I "./include" /I "../apr/include" /D "_DEBUG" /D "API_DECLARE_EXPORT" /D "WIN32" /D "_WINDOWS" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\libapriconv_src" /FD /c 

.c{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

MTL=midl.exe
MTL_PROJ=/nologo /D "_DEBUG" /mktyplib203 /o /win32 "NUL" 
RSC=rc.exe
RSC_PROJ=/l 0x409 /fo"$(INTDIR)\libapriconv.res" /i "./include" /i "../apr/include" /d "_DEBUG" /d "APR_VERSION_ONLY" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\libapriconv.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=kernel32.lib advapi32.lib /nologo /base:"0x6EE50000" /subsystem:windows /dll /incremental:no /pdb:"$(OUTDIR)\libapriconv.pdb" /debug /out:"$(OUTDIR)\libapriconv.dll" /implib:"$(OUTDIR)\libapriconv.lib" 
LINK32_OBJS= \
	"$(INTDIR)\iconv.obj" \
	"$(INTDIR)\iconv_ces.obj" \
	"$(INTDIR)\iconv_ces_euc.obj" \
	"$(INTDIR)\iconv_ces_iso2022.obj" \
	"$(INTDIR)\iconv_int.obj" \
	"$(INTDIR)\iconv_module.obj" \
	"$(INTDIR)\iconv_uc.obj" \
	"$(INTDIR)\libapriconv.res" \
	"..\apr\Debug\libapr.lib"

"$(OUTDIR)\libapriconv.dll" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 


!IF "$(NO_EXTERNAL_DEPS)" != "1"
!IF EXISTS("libapriconv.dep")
!INCLUDE "libapriconv.dep"
!ELSE 
!MESSAGE Warning: cannot find "libapriconv.dep"
!ENDIF 
!ENDIF 


!IF "$(CFG)" == "libapriconv - Win32 Release" || "$(CFG)" == "libapriconv - Win32 Debug"
SOURCE=.\lib\iconv.c

"$(INTDIR)\iconv.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


SOURCE=.\lib\iconv_ces.c

"$(INTDIR)\iconv_ces.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


SOURCE=.\lib\iconv_ces_euc.c

"$(INTDIR)\iconv_ces_euc.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


SOURCE=.\lib\iconv_ces_iso2022.c

"$(INTDIR)\iconv_ces_iso2022.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


SOURCE=.\lib\iconv_int.c

"$(INTDIR)\iconv_int.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


SOURCE=.\lib\iconv_module.c

"$(INTDIR)\iconv_module.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


SOURCE=.\lib\iconv_uc.c

"$(INTDIR)\iconv_uc.obj" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!IF  "$(CFG)" == "libapriconv - Win32 Release"

"libapr - Win32 Release" : 
   cd ".\..\apr"
   $(MAKE) /$(MAKEFLAGS) /F ".\libapr.mak" CFG="libapr - Win32 Release" 
   cd "..\apr-iconv"

"libapr - Win32 ReleaseCLEAN" : 
   cd ".\..\apr"
   $(MAKE) /$(MAKEFLAGS) /F ".\libapr.mak" CFG="libapr - Win32 Release" RECURSE=1 CLEAN 
   cd "..\apr-iconv"

!ELSEIF  "$(CFG)" == "libapriconv - Win32 Debug"

"libapr - Win32 Debug" : 
   cd ".\..\apr"
   $(MAKE) /$(MAKEFLAGS) /F ".\libapr.mak" CFG="libapr - Win32 Debug" 
   cd "..\apr-iconv"

"libapr - Win32 DebugCLEAN" : 
   cd ".\..\apr"
   $(MAKE) /$(MAKEFLAGS) /F ".\libapr.mak" CFG="libapr - Win32 Debug" RECURSE=1 CLEAN 
   cd "..\apr-iconv"

!ENDIF 

SOURCE=.\libapriconv.rc

"$(INTDIR)\libapriconv.res" : $(SOURCE) "$(INTDIR)"
	$(RSC) $(RSC_PROJ) $(SOURCE)



!ENDIF 

