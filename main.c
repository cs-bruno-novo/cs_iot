#include <stdio.h>
#include "genius_test.h"

void call_tests();

int main( int argc, char *argv[] )
{
	call_tests();
	return 0;
}

void call_tests()
{
	test_should_create_initial_array();
}