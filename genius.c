#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

char *build_array( int length );


char *build_array( int length )
{
	char *array = malloc( length + 1 );
	for( int i = 0; i < length; i++)
	{
		array[i] = 'a';
	}
	
	array[length] = '\0';

	return array;
}
