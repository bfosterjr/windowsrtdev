project( Sqlite )
cmake_minimum_required( VERSION 2.6 )

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules)

if(STATIC_LIBRARY)
    set(SQLITE3_STATIC 1)
    set(LIBRARY_TYPE STATIC)
    add_definitions(-DSQLITE3_STATIC_LIBS)
else(STATIC_LIBRARY)
    set(LIBRARY_TYPE SHARED)
endif(STATIC_LIBRARY)

configure_file(sqlite3.h ${CMAKE_CURRENT_BINARY_DIR}/sqlite3.h)
configure_file(sqlite3.c ${CMAKE_CURRENT_BINARY_DIR}/sqlite3.c)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

if(WINCE)
    find_package(Wcecompat REQUIRED)
    include_directories(${WCECOMPAT_INCLUDE_DIR})
endif(WINCE)

set( sqlite_HEADER ${CMAKE_CURRENT_BINARY_DIR}/sqlite3.h sqlite3ext.h )

set( libsqlite_SRC ${CMAKE_CURRENT_BINARY_DIR}/sqlite3.c  )
set( sqlite_SRC shell.c )

add_library( libsqlite3 ${LIBRARY_TYPE}  ${libsqlite_SRC} )
set_target_properties( libsqlite3 PROPERTIES OUTPUT_NAME "sqlite3" )

if(WINCE)
    target_link_libraries(libsqlite3 ${WCECOMPAT_LIBRARIES})
endif(WINCE)

install( TARGETS libsqlite3 RUNTIME DESTINATION bin LIBRARY DESTINATION lib ARCHIVE DESTINATION lib )

add_executable( sqlite3 ${sqlite_SRC} )
target_link_libraries( sqlite3 libsqlite3 )

install( TARGETS sqlite3 RUNTIME DESTINATION bin LIBRARY DESTINATION lib ARCHIVE DESTINATION lib )

install( FILES ${sqlite_HEADER} DESTINATION include )
