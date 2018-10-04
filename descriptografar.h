typedef unsigned long int l_int;

l_int descriptografaLetra(char caractereCriptografado, l_int n, l_int d);	//Calcula valor do caractere descriptografado
void geraArquivoDescriptografado(char nomeDoArquivoCriptografado[], l_int n, l_int d);		//Descriptografa arquivo de acordo com chave privada
void descriptografar();						//Menu principal para descriptografar arquivo
