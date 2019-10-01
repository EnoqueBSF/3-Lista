#include <stdio.h>

int contador;
char texto[50];

int main(){
	printf("Digite um texto e sera informado os caracteres: ");
	gets(texto);
	
	for (contador = 0;contador <= sizeof(texto) && texto[contador] != '\0';contador++);
	
	printf("quantidade de caracteres: %d", contador);
}
