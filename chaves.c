#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "chaves.h"

l_int mdc(l_int  a, l_int b, l_int *x, l_int *y) {
	l_int xx, yy, d;
	if (b == 0) {
		*x = 1; 
		*y = 0;
		return a;
	}
	d = mdc(b, a%b, &xx, &yy);
	*x = yy;
	*y = xx - (a / b * yy);
	return d;
}

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
	l_int p, q, d;
	d = mdc(e, fiN, &p, &q);
  	if (p < 0) p = p + fiN;
	return a;
}
