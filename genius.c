#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "genius.h"

int *build_array( int length );


int *build_array( int length )
{
	int *array = malloc( length + 1 );
	int i;
	for( i = 0; i < length; i++)
	{
		array[i] = rand() % TOTAL_DE_CORES;
	}

	array[length] = -1;

	return array;
}

int validate_answer( int *piscadas, int position, int cor )
{
	if( piscadas[position] == cor )
		return RESPOSTA_CERTA;

	return RESPOSTA_ERRADA;
}

void get_rodada( int *piscadas, int rodada, int *rodadas )
{
	if( rodada == 0 )
	{
		rodadas[0] = -1;
		return;
	}
	int i;
	for( i = 0; i < rodada; i++ )
	{
		rodadas[i] = piscadas[i];
	}
	rodadas[rodada] = -1;
}
