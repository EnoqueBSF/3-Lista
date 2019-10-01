#include <stdio.h>

int i,vogais;
char texto[20];

int main(){
	gets(texto);
	
	for (i = 0;i <= sizeof(texto) && texto[i] != '\0';i++){
		if (texto[i]== 'a' || texto[i]== 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u'||texto[i]== 'A' || texto[i]== 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U'){
			vogais++;
		}	
	}
	printf("total de vogais: %d",vogais);
	
	return 0;	
}
