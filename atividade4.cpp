#include <stdlib.h>
#include <stdio.h>


int main(){

	int num1, num2, resto;
	
	printf("Informe o primeiro valor\n");
	scanf(" %d", &num1);
	
	printf("Informe o segundo numero\n");
	scanf(" %d", &num2);
	
	
	if(num1 == 0 || num2 == 0){
		
	printf("Nao eh possivel realizar tal operacao\n");
	}
	
	
	
	if(num1 > num2){
		resto = num1 % num2;
		
	}else if (num1 < num2){
		resto = num2 % num1;
	}
	printf("O resto da divisao eh %d\n", resto);
	
	return 0;
}
