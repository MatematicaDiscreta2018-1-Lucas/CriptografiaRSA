#include <stdio.h>
#include <string.h>
#include "criptografar.h"
#include "interface.h"

l_int criptografaLetra(l_int caractereOriginal, l_int n, l_int e) {
	l_int caractereCrip = caractereOriginal;
	if(caractereCrip < 65) caractereCrip = 91;
	caractereCrip = caractereCrip - 65;
	caractereCrip = elevar(caractereCrip, caractereCrip, e) % n;
	return caractereCrip;
}

void geraArquivoCriptografado(char nomeDoArquivoOriginal[], l_int n, l_int e) {
	char caractereOriginal;
	FILE *arqOriginal = fopen(nomeDoArquivoOriginal, "r");
	FILE *arqCriptografado = NULL;
	char nomeDoArquivoCriptografado[FILENAME_MAX];
	strcpy(nomeDoArquivoCriptografado, nomeDoArquivoOriginal);
	strcat(nomeDoArquivoCriptografado, ".crip");
	arqCriptografado = fopen(nomeDoArquivoCriptografado, "w+");
	while(fread(&caractereOriginal, sizeof(char), 1, arqOriginal) == 1) {
		fprintf(arqCriptografado, "%lu ", criptografaLetra(caractereOriginal, n, e));
	}
	fclose(arqOriginal);
	fclose(arqCriptografado);
}


void criptografar() {
	l_int n, e;
	char arquivo[FILENAME_MAX];
	i_criptografar(1);
	scanf("%[^\n]s", arquivo);
	getchar();
	i_criptografar(2);
	scanf("%lu", &n);
	i_criptografar(3);
	scanf("%lu", &e);
	i_criptografar(4);
	geraArquivoCriptografado(arquivo, n, e);
	i_criptografar(5);
}
