/* Copyright 2000-2004 The Apache Software Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef API_VERSION_H
#define API_VERSION_H

#include "apr.h"
#include "apr_version.h"

#include "apr_iconv.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file api_version.h
 * @brief 
 * 
 * APR-iconv's Version
 *
 * There are several different mechanisms for accessing the version. There
 * is a string form, and a set of numbers; in addition, there are constants
 * which can be compiled into your application, and you can query the library
 * being used for its actual version.
 *
 * Note that it is possible for an application to detect that it has been
 * compiled against a different version of API by use of the compile-time
 * constants and the use of the run-time query function.
 *
 * API version numbering follows the guidelines specified in:
 *
 *     http://apr.apache.org/versioning.html
 */

/* The numeric compile-time version constants. These constants are the
 * authoritative version numbers for API. 
 */

/** major version 
 * Major API changes that could cause compatibility problems for older
 * programs such as structure size changes.  No binary compatibility is
 * possible across a change in the major version.
 */
#define API_MAJOR_VERSION       0

/** 
 * Minor API changes that do not cause binary compatibility problems.
 * Should be reset to 0 when upgrading API_MAJOR_VERSION
 */
#define API_MINOR_VERSION       9

/** patch level */
#define API_PATCH_VERSION       7

/** 
 *  This symbol is defined for internal, "development" copies of API. This
 *  symbol will be #undef'd for releases. 
 */
/* #define API_IS_DEV_VERSION */


/** The formatted string of API's version */
#define API_VERSION_STRING \
     APR_STRINGIFY(API_MAJOR_VERSION) "." \
     APR_STRINGIFY(API_MINOR_VERSION) "." \
     APR_STRINGIFY(API_PATCH_VERSION) \
     API_IS_DEV_STRING

/**
 * Return APR-util's version information information in a numeric form.
 *
 *  @param pvsn Pointer to a version structure for returning the version
 *              information.
 */
API_DECLARE(void) api_version(apr_version_t *pvsn);

/** Return API's version information as a string. */
API_DECLARE(const char *) api_version_string(void);


/** Internal: string form of the "is dev" flag */
#ifdef API_IS_DEV_VERSION
#define API_IS_DEV_STRING "-dev"
#else
#define API_IS_DEV_STRING ""
#endif

#ifdef __cplusplus
}
#endif

#endif /* API_VERSION_H */
