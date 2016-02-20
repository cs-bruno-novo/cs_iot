#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "genius.h"

int *build_array( int length );


int *build_array( int length )
{
	int *array = malloc( length + 1 );
	for( int i = 0; i < length; i++)
	{
		array[i] = rand() % TOTAL_DE_CORES;
	}

	array[length] = '\0';

	return array;
}

int validate_answer( char *piscadas, int position, int cor )
{
	return piscadas[position] == cor;
}
