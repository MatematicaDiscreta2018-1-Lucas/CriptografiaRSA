#include <stdio.h>
#include <string.h>
#include "criptografar.h"
#include "interface.h"

int elevar(int numero, int base, int potencia) {
	if(potencia == 1) {
		return numero;
	} else {
		return elevar(numero*base, base, potencia-1);
	}
}

int criptografaLetra(int caractereOriginal, int n, int e) {
	int caractereCrip = caractereOriginal;
	caractereCrip = caractereCrip - 65;
	if(caractereCrip < 0) {
		caractereCrip = 26;
	}
	printf("\n%d -", caractereCrip);
	caractereCrip = elevar(caractereCrip, caractereCrip, e) % n;
	printf("\n%d -", caractereCrip);
	return caractereCrip;
}

void geraArquivoCriptografado(char nomeDoArquivoOriginal[], int n, int e) {
	char caractereOriginal;
	FILE *arqOriginal = fopen(nomeDoArquivoOriginal, "r");
	FILE *arqCriptografado = NULL;
	char nomeDoArquivoCriptografado[FILENAME_MAX];
	strcpy(nomeDoArquivoCriptografado, nomeDoArquivoOriginal);
	strcat(nomeDoArquivoCriptografado, ".crip");
	arqCriptografado = fopen(nomeDoArquivoCriptografado, "w+");
	while(fread(&caractereOriginal, sizeof(char), 1, arqOriginal) == 1) {
		fprintf(arqCriptografado, "%d ", criptografaLetra(caractereOriginal, n, e));
	}
}


void criptografar() {
	int n, e;
	char arquivo[FILENAME_MAX];
	i_criptografar(1);
	scanf("%[^\n]s", arquivo);
	getchar();
	i_criptografar(2);
	scanf("%d", &n);
	i_criptografar(3);
	scanf("%d", &e);
	i_criptografar(4);
	geraArquivoCriptografado(arquivo, n, e);
	i_criptografar(5);
}
