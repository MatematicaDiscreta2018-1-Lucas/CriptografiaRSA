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

l_int geraD(l_int fiN, l_int e) {
	l_int d;
	for (d = 1; d <= fiN; d++) {
		if ((e * d) % fiN == 1) return d;
	}
}

l_int geraFiN(l_int p, l_int q) {
	return (p - 1) * (q - 1);
}
