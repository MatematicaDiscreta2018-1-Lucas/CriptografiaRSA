#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "chaves.h"

void escreveChave(l_int n, l_int e) {
	FILE *chave = NULL;
	char nomeDoArquivo[FILENAME_MAX] = "ChavePublica.key";
	chave = fopen(nomeDoArquivo, "w+");
	fprintf(chave, "(%lu,%lu)", n, e);
	fclose(chave);
}

l_int geraN(l_int p, l_int q) {
	return p * q;
}
