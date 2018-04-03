#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <stdlib.h>
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int controle = 0,
		soma     = 0,
		num1     = 0, 
		num2     = 0;
    
    printf("Informe o primeiro número: ");
    scanf("%d",&num1);
    printf("Informe o segundo número: ");
    scanf("%d",&num2);
    
    for (controle = num1; controle <= num2; controle++) {
        soma = controle + soma;
    }
    
    printf("\nSoma dos números: %d\n", soma);
    
    return(0);
}
