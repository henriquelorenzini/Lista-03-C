#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int fator1  = 0,
		fator2   = 0,
		produto = 0;
			
	for (fator1 = 1; fator1 <= 10; fator1++) {
		printf("Tabuado do %d\n", fator1);
		for (fator2 = 1; fator2 <= 10; fator2++) {
			produto = fator1 * fator2;
			
			printf("%d * %d = %d\n", fator1, fator2, produto);
		}
		printf("\n");
    }
    
    return(0);
}
