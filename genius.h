#define AMARELO 0
#define VERMELHO 1
#define VERDE 2
#define BRANCO 3

#define RESPOSTA_ERRADA 0
#define RESPOSTA_CERTA 1

#define TOTAL_DE_CORES 4


int *build_array( int length );
int validate_answer( int *, int, int );
int *get_rodada( int *, int );
