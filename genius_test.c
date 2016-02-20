#include <assert.h>
#include <stdio.h>
#include "genius.h"

void test_should_create_initial_array()
{
	// setup
	int *actual = NULL;
	int length = 10;

	// chama função que cria array
	actual = build_array( length );

	// garante que o array não é nulo
	assert( actual != NULL );

	// garante que o comprimento do array está preenchido com 'a'
	for( int i = 0; i < length; i++ )
	{
		assert( actual[i] == AMARELO || 
			actual[i] == VERMELHO || 
			actual[i] == VERDE || 
			actual[i] == BRANCO );
	}

	// garante que o último byte é nulo
	assert( actual[length] == '\0' );
}

void test_should_validate_answer()
{
	// montar um array de piscadas
	char piscadas[5] = { AMARELO, AMARELO, AMARELO, AMARELO, '\0' };

	// sut
	assert( validate_answer( piscadas, 0, AMARELO ) );
}