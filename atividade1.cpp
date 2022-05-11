#include <stdio.h>
#include <stdlib.h>

int main(){


char categoria;
float media, quantidade, soma, total;

total = 0;

printf("\nBem vindo! Para finalizar selecione um categoria invalida (D..Z)\n\n");
// Precisa ser alguma além de A,B ou C para finalizar e calular 
do
{
	printf("Infome a Categoria:");
	scanf(" %c", &categoria);
	if(categoria == 'A' || categoria == 'B' || categoria == 'C'){
	
	
	printf("Informe a Quantidade:");
	scanf(" %f", &quantidade);
	if(quantidade > 0){
	
	
	soma = soma + quantidade;
	total++;
}else{
}
}else{
}
}while (categoria == 'A' || categoria == 'B'|| categoria == 'C');

if((soma > 0)&&(total > 0)){

	media = soma / total;

    printf("A media dos produtos eh %0.2f", media);
}else{

printf("Erro! A media eh nula ou negativa!");
}
return 0;
}


