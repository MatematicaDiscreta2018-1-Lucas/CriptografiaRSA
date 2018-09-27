#include <stdio.h>
#include "chavePublica.h"
#include "criptografar.h"
#include "descriptografar.h"
#include "interface.h"
#include "menu.h"

int menu() {
	int opcao = 0;
	i_menu(1);
	scanf("%d", &opcao);
	if(opcao == 0) {
		return 0;
	} else if(opcao == 1) {
		chavePublica();
	} else if(opcao == 2) {
		criptografar();
	} else if(opcao == 3) {
		descriptografar();
	}
	i_menu(2);
	scanf("%d", &opcao);
	if(opcao == 0) {
		return 0;
	} else if(opcao == 1) {
		menu();
	}
	return 0;
}
