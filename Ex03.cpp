#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

main () {
	char frase[200];
   int i,
		   caracteres,
		   fim,
		   quantidade;
	
  quantidade = 1;
	
  printf("Digite uma frase ou palavra: ");
	gets(frase);
	caracteres = strlen(frase);
	fim = caracteres - 1;
	for(i = 0; i <= fim; i++) {
		if(frase[i]==' ') {
			quantidade++;
		}
	}
	printf("\nSua frase possui %d palavra(s)", quantidade);
	return 0;
}
