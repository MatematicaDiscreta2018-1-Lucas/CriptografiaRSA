#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "chaves.h"

void escreveChave(int n, int e) {
	FILE *chave = NULL;
	char nomeDoArquivo[FILENAME_MAX] = "ChavePublica.key";
	chave = fopen(nomeDoArquivo, "w+");
	fprintf(chave, "(%d,%d)", n, e);
	fclose(chave);
}
int geraN(int p, int q) {
	return p * q;
}
