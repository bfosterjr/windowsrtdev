# CMake generated Testfile for 
# Source directory: C:/svn/windowsrtdev/libs/pcre/7.8/src
# Build directory: C:/svn/windowsrtdev/libs/pcre/7.8/src/build
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(pcre_test "cmd" "/C" "C:/svn/windowsrtdev/libs/pcre/7.8/src/RunTest.bat")
ADD_TEST(pcrecpp_test "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/DEBUG/pcrecpp_unittest.exe")
ADD_TEST(pcre_scanner_test "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/DEBUG/pcre_scanner_unittest.exe")
ADD_TEST(pcre_stringpiece_test "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/DEBUG/pcre_stringpiece_unittest.exe")
