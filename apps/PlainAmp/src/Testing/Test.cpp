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


#include "GlobalTest.h"
#include "cpptest/cpptest.h"
#include <cstdlib>
#include <iostream>
#include "PathTest.h"

using namespace std;



////////////////////////////////////////////////////////////////////////////////
///
////////////////////////////////////////////////////////////////////////////////
int main( int argc, char * argv[] )
{
	PathTest path_test;
    Test::TextOutput output( Test::TextOutput::Verbose );
	path_test.run( output, false );
	
	cout << endl;
    system( "PAUSE" );
    return EXIT_SUCCESS;
}
