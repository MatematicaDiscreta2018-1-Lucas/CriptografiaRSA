#include <stdio.h>
#include "interface.h"

void iniciaTela() {
	#if linux || LINUX || Linux || UNIX
	printf("\e[H\e[2J");
	__fpurge(stdin);
	#elif defined WIN32
	system("cls");
	fflush(stdin);
	#else
	printf("\n\tSistema operacional nao reconhecido\n");
	#endif
}
void cabecalho(int funcao) {
	iniciaTela();
	printf("--------------------------------------------------\n");
	printf("------------------- criptoRiSA -------------------\n");
	if(funcao == 0) {
		printf("--------------------------------------------------\n");
	} else if(funcao == 1) {
		printf("--------------- gerar chave publica --------------\n");
	} else if(funcao == 2) {
		printf("-------------- criptografar arquivo --------------\n");
	} else if(funcao == 3) {
		printf("------------- descriptografar arquivo ------------\n");
	}
	printf("--------------------------------------------------\n");
}
void i_menu(int opcao) {
	if(opcao == 1) {
		cabecalho(0);
		printf("1. Gerar chave publica\n");
		printf("2. Criptografar arquivo\n");
		printf("3. Descriptografar arquivo\n");
		printf("0. Sair\n\n");
		printf("SELECIONE: ");
	} else if(opcao == 2) {
		printf("\n");
		printf("1. Voltar ao menu\n");
		printf("0. Sair\n\n");
		printf("SELECIONE: ");
	}
}
void i_chavePublica(int opcao) {
	if(opcao == 1) {
		cabecalho(1);
		printf("Digite 'p': ");
	} else if(opcao == 2) {
		printf("Digite 'q': ");
	} else if(opcao == 3) {
		printf("Digite 'e': ");
	} else if(opcao == 4) {
		printf("\n");
		printf("Gerando chave publica...\n");
	} else if(opcao == 5) {
		printf("Chave publica gerada.\n");
	}
}
void i_criptografar(int opcao) {
	if(opcao == 1) {
		cabecalho(2);
		printf("Digite o nome do arquivo: ");
	} else if(opcao == 2) {
		printf("Digite 'n': ");
	} else if(opcao == 3) {
		printf("Digite 'e': ");
	} else if(opcao == 4) {
		printf("\n");
		printf("Gerando arquivo criptografado...");
	}
}
void i_descriptografar(int opcao) {
	if(opcao == 1) {
		cabecalho(3);
		printf("Digite o nome do arquivo: ");
	} else if(opcao == 2) {
		printf("Digite 'p': ");
	} else if(opcao == 3) {
		printf("Digite 'q': ");
	} else if(opcao == 4) {
		printf("Digite 'e': ");
	} else if(opcao == 5) {
		printf("\n");
		printf("Gerando arquivo descriptografado...");
	}
}
