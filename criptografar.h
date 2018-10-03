typedef unsigned long int l_int;

l_int elevar(l_int numero, l_int base, l_int potencia);		//Eleva um numero a sua potencia
l_int criptografaLetra(l_int caractereOriginal, l_int n, l_int e); 	//Calcula novo valor em inteiro do caractere
void geraArquivoCriptografado(char nomeDoArquivoOriginal[], l_int n, l_int e);	//Criptografa o arquivo de acordo com a chave publica
void criptografar();	//Menu principal para criptografar arquivo
