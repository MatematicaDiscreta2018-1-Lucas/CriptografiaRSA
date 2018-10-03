typedef unsigned long int l_int;

l_int criptografaLetra(l_int caractereOriginal, l_int n, l_int e); 	//Calcula novo valor em inteiro do caractere
void geraArquivoCriptografado(char nomeDoArquivoOriginal[], l_int n, l_int e);	//Criptografa o arquivo de acordo com a chave publica
void criptografar();	//Menu principal para criptografar arquivo
