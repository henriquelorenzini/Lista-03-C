#include  <stdio.h>

	int main () {
	int i, j, k=1,n ,m ,  num;
 	
	printf ("Insira um numero:\n");
 	scanf ("%d", &num);
 	printf("\n");
 	for (i=1; i<=num; i++){
  		for (j=num; j<=i; j++)
		printf ("");
  		for (k=1; k<=i*1; k++)
		printf ("*");
  		printf ("\n");
 	}
	getchar ();
	return 0;
}
