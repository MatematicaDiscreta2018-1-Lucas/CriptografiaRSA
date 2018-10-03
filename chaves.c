#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "chaves.h"

l_int elevar(l_int numero, l_int base, l_int potencia) {
	if(potencia == 1) return numero; 
	else return elevar(numero*base, base, potencia-1);
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

l_int geraD(l_int p, l_int q, l_int e) {
	int d;
	
	return ((p - 1) * (q - 1)) / (e + (e % ((p - 1) * (q - 1))));
}
