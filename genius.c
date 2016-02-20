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

	array[length] = -1;

	return array;
}

int validate_answer( int *piscadas, int position, int cor )
{
	if( piscadas[position] == cor )
		return RESPOSTA_CERTA;

	return RESPOSTA_ERRADA;
}

int *get_rodada( int *piscadas, int rodada )
{
	if( rodada == 0 )
		return NULL;

	int *rodadas = (int*)malloc( (rodada + 1) * sizeof(int) );
	for( int i = 0; i < rodada; i++ )
	{
		rodadas[i] = piscadas[i];
	}
	rodadas[rodada] = -1;

	return rodadas;
}
