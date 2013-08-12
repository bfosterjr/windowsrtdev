//////////////////////////////////////////////////////////////////////////////// 
/// Plainamp, Open source Winamp core
/// 
/// Copyright © 2005  Sebastian Pipping <webmaster@hartwork.org>
/// 
/// -->  http://www.hartwork.org
/// 
/// This source code is released under the GNU General Public License (GPL).
/// See GPL.txt for details. Any non-GPL usage is strictly forbidden.
////////////////////////////////////////////////////////////////////////////////


#ifndef PA_PATH_TEST_H
#define PA_PATH_TEST_H



#define PLAINAMP_TESTING
#include "../Source/Path.h"



////////////////////////////////////////////////////////////////////////////////
///
////////////////////////////////////////////////////////////////////////////////
class PathTest : public Test::Suite
{
public:
	PathTest()
	{
		TEST_ADD( PathTest::ApplyRootToFilename_FullRoot )
		TEST_ADD( PathTest::ApplyRootToFilename_PartRoot )
		TEST_ADD( PathTest::ApplyRootToFilename_DiffDrive )
	}
/*
protected:
	virtual void setup()     {} // setup resources... 
	virtual void tear_down() {} // remove resources...
*/
private:
	void ApplyRootToFilename_FullRoot();
	void ApplyRootToFilename_PartRoot();
	void ApplyRootToFilename_DiffDrive();
};



////////////////////////////////////////////////////////////////////////////////
///
////////////////////////////////////////////////////////////////////////////////
void PathTest::ApplyRootToFilename_FullRoot()
{
	// w/ backslash
	TCHAR a[ 2000 ] = TEXT( "C:\\111\\" );
	TCHAR b[ 2000 ] = TEXT( "C:\\111\\222\\333.mp3" );
	ApplyRootToFilename( a, b );
	TEST_ASSERT( !_tcscmp( b, TEXT( "222\\333.mp3" ) ) );
	
	// w/o backslash
	_tcscpy( a, TEXT( "C:\\111" ) );
	_tcscpy( b, TEXT( "C:\\111\\222\\333.mp3" ) );
	ApplyRootToFilename( a, b );
	TEST_ASSERT( !_tcscmp( b, TEXT( "222\\333.mp3" ) ) );

////////////////////////////////////////////////////////////////////////////////
	
	// w/ backslash
	_tcscpy( a, TEXT( "C:\\" ) );
	_tcscpy( b, TEXT( "C:\\111\\222.mp3" ) );
	ApplyRootToFilename( a, b );
	TEST_ASSERT( !_tcscmp( b, TEXT( "111\\222.mp3" ) ) );
	
	// w/o backslash
	_tcscpy( a, TEXT( "C:" ) );
	_tcscpy( b, TEXT( "C:\\111\\222.mp3" ) );
	ApplyRootToFilename( a, b );
	TEST_ASSERT( !_tcscmp( b, TEXT( "111\\222.mp3" ) ) );
}



////////////////////////////////////////////////////////////////////////////////
///
////////////////////////////////////////////////////////////////////////////////
void PathTest::ApplyRootToFilename_PartRoot()
{
	// w/ backslash
	TCHAR a[ 2000 ] = TEXT( "C:\\111\\222\\333\\" );
	TCHAR b[ 2000 ] = TEXT( "C:\\111\\444\\555.mp3" );
	ApplyRootToFilename( a, b );
	TEST_ASSERT( !_tcscmp( b, TEXT( "..\\..\\444\\555.mp3" ) ) );
	
	// w/o backslash
	_tcscpy( a, TEXT( "C:\\111\\222\\333" ) );
	_tcscpy( b, TEXT( "C:\\111\\444\\555.mp3" ) );
	ApplyRootToFilename( a, b );
	TEST_ASSERT( !_tcscmp( b, TEXT( "..\\..\\444\\555.mp3" ) ) );
}



////////////////////////////////////////////////////////////////////////////////
///
////////////////////////////////////////////////////////////////////////////////
void PathTest::ApplyRootToFilename_DiffDrive()
{
	TCHAR a[ 2000 ] = TEXT( "C:\\111\\" );
	TCHAR b[ 2000 ] = TEXT( "D:\\111\\222.mp3" );
	ApplyRootToFilename( a, b );
	TEST_ASSERT( !_tcscmp( b, TEXT( "D:\\111\\222.mp3" ) ) );
}



#endif // PA_PATH_TEST_H
