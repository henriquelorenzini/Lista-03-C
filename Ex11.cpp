 #include  <stdio.h>
    int main () {
	  	
		  int i, j, k=1,n ,m ,  num;
 	
	printf ("Insira um numero:\n");
	scanf ("%d", &num);
 	
  		for (i=1; i<=num; i++){
  		for (j=num; j>=i; j--)
	
	printf (" ");
  
  		for (k=1; k<=i*2-1; k++)
	
  	printf ("*");
  	printf ("\n");
 	}
 		for (m=num/1.5; m<num; m++){
  		for (n=2; n<=k/2; n++)
   		printf (" ");
 		printf ("*\n");
 		}
	getchar ();
	return 0;
}
