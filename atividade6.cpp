#include <stdlib.h>
#include <stdio.h>

 
  
  int main()  
  {  
   int linha, i, j;
   char resp;
   do{
   
   printf("Infome um numero postivo: ");  
   scanf(" %d", &linha);  
   for (i = 1; i <= linha; i++)  
   {  
    for (j = 1; j <= i; j++){  
    printf("%d",i,j); 
	printf("	"); 
    }  
    printf(" \n");  
    }
    printf("\nDeseja digitar outro numero? (S ou N)\n");
    scanf(" %c", &resp);
}while(resp == 's' || resp == 'S');
	  return 0; 
	  }  
	  
