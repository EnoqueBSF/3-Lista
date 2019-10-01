#include <stdio.h>

int i,j;
char texto1[255],texto2[255];

int main(){
	gets(texto1);

	for (i = 0;i<sizeof(texto2) && texto2[i]!='\0';i++){
		texto2[i]= texto1[i];
	}
	printf("%s",texto2);
}
