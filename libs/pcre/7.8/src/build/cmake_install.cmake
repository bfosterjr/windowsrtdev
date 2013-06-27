# Install script for directory: C:/svn/windowsrtdev/libs/pcre/7.8/src

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/PCRE")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/Debug/pcred.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/Release/pcre.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/MinSizeRel/pcre.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/RelWithDebInfo/pcre.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/Debug/pcreposixd.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/Release/pcreposix.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/MinSizeRel/pcreposix.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/RelWithDebInfo/pcreposix.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/DEBUG/pcregrep.exe")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/Release/pcregrep.exe")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/MinSizeRel/pcregrep.exe")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/RelWithDebInfo/pcregrep.exe")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/DEBUG/pcretest.exe")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/Release/pcretest.exe")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/MinSizeRel/pcretest.exe")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/RelWithDebInfo/pcretest.exe")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/pcre.h"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/pcreposix.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/Debug/pcrecppd.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/Release/pcrecpp.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/MinSizeRel/pcrecpp.lib")
  ELSEIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/RelWithDebInfo/pcrecpp.lib")
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/pcrecpp.h"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/pcre_scanner.h"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/pcrecpparg.h"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/pcre_stringpiece.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/man/man1" TYPE FILE FILES
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre-config.1"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcregrep.1"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcretest.1"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/man/man3" TYPE FILE FILES
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcreapi.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcrebuild.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcrecallout.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcrecompat.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcrecpp.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcrematching.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcrepartial.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcrepattern.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcreperform.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcreposix.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcreprecompile.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcresample.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcrestack.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcresyntax.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_compile.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_compile2.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_config.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_copy_named_substring.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_copy_substring.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_dfa_exec.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_exec.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_free_substring.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_free_substring_list.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_fullinfo.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_get_named_substring.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_get_stringnumber.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_get_stringtable_entries.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_get_substring.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_get_substring_list.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_info.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_maketables.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_refcount.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_study.3"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/pcre_version.3"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/pcre/html" TYPE FILE FILES
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/index.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre-config.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcreapi.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcrebuild.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcrecallout.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcrecompat.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcrecpp.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcregrep.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcrematching.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcrepartial.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcrepattern.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcreperform.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcreposix.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcreprecompile.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcresample.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcrestack.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcresyntax.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcretest.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_compile.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_compile2.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_config.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_copy_named_substring.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_copy_substring.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_dfa_exec.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_exec.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_free_substring.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_free_substring_list.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_fullinfo.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_get_named_substring.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_get_stringnumber.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_get_stringtable_entries.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_get_substring.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_get_substring_list.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_info.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_maketables.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_refcount.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_study.html"
    "C:/svn/windowsrtdev/libs/pcre/7.8/src/doc/html/pcre_version.html"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "C:/svn/windowsrtdev/libs/pcre/7.8/src/build/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
