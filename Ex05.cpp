#include <stdio.h>
#include <string.h>

main () {
	char frase[200];
	int  i,
		 caracteres,
		 fim,
		 quantidade;
	
	quantidade = 1;
	
	printf("Digite uma frase ou palavra: ");
	gets(frase);
	caracteres = strlen(frase);
	fim = caracteres - 1;
	for(i = 0; i <= fim; i++) {
		printf("%c", frase[i]);
		printf(" ");
	}
	return 0;
}
