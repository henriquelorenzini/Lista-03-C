#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <iostream>

main () {
	char palavra[200];
	int caracteres,
		vogais,
		consoantes,
		numeros,
		espacos,
		i,
		fim;
	
		vogais = 0;
		consoantes = 0;
		numeros = 0;
		espacos = 0;
	
	
	printf("Digite uma frase ou palavra: ");
	gets(palavra);
	caracteres = strlen(palavra);
	printf("Quantidade de caracteres = %d\n", caracteres);
	fim = caracteres - 1;
	
	for(i = 0; i <= fim; i++) {
		if(palavra[i]=='a' || palavra[i]=='e' || palavra[i]=='i' ||
           palavra[i]=='o' || palavra[i]=='u' || palavra[i]=='A' ||
           palavra[i]=='E' || palavra[i]=='I' || palavra[i]=='O' ||
           palavra[i]=='U')
        {
        	++vogais;

	    }
		else if ((palavra[i]>='a'&& palavra[i]<='z') || (palavra[i]>='A'&& palavra[i]<='Z'))
	    {

	    	++consoantes;

	    }
	    if (palavra[i]>='0' && palavra[i]<='9')
	   
	    {
	    	++numeros;
	   
	    }
	    if (palavra[i]==' ')
	    {
	    
			++espacos;
	    
		}
	    
	}
	printf("Quantidade de vogais     = %d\n", vogais);
	
	printf("Quantidade de consoantes = %d\n", consoantes);
	
	printf("Quantidade de numeros    = %d\n", numeros);
	
	printf("Quantidade de espacos    = %d\n", espacos);
	
	return 0;
}
