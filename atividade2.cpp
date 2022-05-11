#include <stdio.h>
#include <stdlib.h>

int main(){

char resp;
float temp;

printf("O Paciente se sente bem? (s ou n)\n");
scanf(" %c", &resp);
if (resp == 's' || resp == 'S'){
	printf("\nSaudavel.");
	
}else if (resp == 'n' || resp == 'N'){
	printf("\nO paciente esta com dor?(s ou n)\n");
	scanf(" %c", &resp);
if (resp == 's' || resp == 'S'){
	printf("\nDoente.");
	
}else if (resp == 'n' || resp == 'N'){
	printf("\nTemperatura do Paciente:\n");
	scanf(" %f", &temp);
	if (temp <= 37){
		printf("\nSaudavel.");
		
	}else{
		printf("\nDoente.");
	}
}
}else{
	printf("\nErro Valor Invalido!\nPor favor informe somente s ou n como resposta.");
}
return 0;	
}
