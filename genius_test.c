#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

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
	assert( actual[length] == -1 );
}

void test_should_validate_answer()
{
	// montar um array de piscadas
	int piscadas[2] = { AMARELO, -1 };

	// sut
	assert( validate_answer( piscadas, 0, AMARELO ) == RESPOSTA_CERTA );
	assert( validate_answer( piscadas, 0, VERDE ) == RESPOSTA_ERRADA );
	assert( validate_answer( piscadas, 1, VERDE ) == RESPOSTA_ERRADA );
}

void test_should_retorna_rodada()
{
	// monta um array de piscadas
	int piscadas[4] = { AMARELO, VERDE, AMARELO, -1 };

	// simula retorna as piscadas da rodada zero
	int rodada[1];
	get_rodada( piscadas, 0, rodada);
	assert( rodada[0] == -1 );

	// simula retorna as piscadas da primeira rodada
	int rodada1[2];
	get_rodada( piscadas, 1, rodada1);
	assert( rodada1[0] == AMARELO );
	assert( rodada1[1] == -1 );

	// // simula retorna as piscadas da primeira rodada
	int rodada2[3];
	get_rodada( piscadas, 2, rodada2);
	assert( rodada2[0] == AMARELO );
	assert( rodada2[1] == VERDE );
	assert( rodada2[2] == -1 );

	// // simula retorna as piscadas da terceira rodada
	int rodada3[4];
	get_rodada( piscadas, 3, rodada3);
	assert( rodada3[0] == AMARELO );
	assert( rodada3[1] == VERDE );
	assert( rodada3[2] == AMARELO );
	assert( rodada3[3] == -1 );
}