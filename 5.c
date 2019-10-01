#include <stdio.h>

char texto1[255],texto2[255];
int a, b;

int main(){
	printf("Digite o primeiro texto: ");
	gets(texto1);
	printf("\nDigite o segundo texto: ");
	gets(texto2);
	
	for(a = 0;texto1[a] != '\0';a++);

	for(b = 0;b<=sizeof(texto2) &&  texto2[b]!='\0';b++,a++){
		texto1[a] = texto2[b];
			
	}
	texto1[a]='\0';
 	printf("A concatenacao dos dois textos e: %s",texto1);
}
