# CriptografiaRSA
Encriptador e descriptador de textos usando criptografia RSA.

---

### Como compilar (via terminal):

	gcc -c chaves.c -o chaves.o
	gcc -c chavePublica.c -o chavePublica.o
	gcc -c criptografar.c -o criptografar.o
	gcc -c descriptografar.c -o descriptografar.o
	gcc -c interface.c -o interface.o
	gcc -c main.c -o main.o
	gcc -c menu.c -o menu.o
	gcc chaves.o chavePublica.o criptografar.o descriptografar.o interface.o main.o menu.o -o executavel

ou:

	./compilador

### Como executar (via terminal):

	./executavel

---
