#include <stdio.h>

int i,identico,diferentes;
char texto1[255],texto2[255];

int main(){
	printf("Digite o primeiro texto: ");
	gets(texto1);
	printf("Digite o segundo texto: ");
	gets(texto2);
	
	for (i = 0;i <= sizeof(texto1) && texto2[i] != '\0';i++){
		if (texto1[i] == texto2[i]){
			identico=1;
		}
		else{
			diferentes=1;
		}
	}
	if (diferentes==1){
		printf("Textos diferentes");
	}else{
		printf("Textos iguais");
	}
	return 0;
}
