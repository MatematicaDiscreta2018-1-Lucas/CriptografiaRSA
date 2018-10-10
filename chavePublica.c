#include <stdio.h>
#include "chaves.h"
#include "chavePublica.h"
#include "interface.h"

void chavePublica() {
	l_int p, q, e;
	i_chavePublica(1);
	scanf("%lu", &p);
	i_chavePublica(2);
	scanf("%lu", &q);
	i_chavePublica(3);
	scanf("%lu", &e);
	i_chavePublica(4);
	escreveChave(geraN(p, q), e);
	i_chavePublica(5);
}
