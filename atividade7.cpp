#include <stdlib.h>
#include <stdio.h>
int main(){

int n100,n50,n20,n10,n5,n2,n1;
float q, v, g, x, y, n, z, v2, med;
y = 0;

do
{
y++;
printf("Informe a quantidade de um produto:\n", y);
scanf(" %f", &q);

if(q < 0){ 
break;
}else if(q > 0){
	
printf("Informe o valor unitario do produto:\n");
scanf(" %f", &v2);

if(v2 < 0){break;
}else if(v2 > 0){
	
g = q * v2;
x = x + g;
}
}
}
while (q != 0);

v = x; //Notas:
    n100 = x/100;
    x = x - (n100*100);
    n50 = x/50;
    x = x - (n50*50);
    n20 = x/20;
    x = x - (n20*20);
    n10 = x/10;
    x = x - (n10*10);
    n5 = x/5;
    x = x - (n5*5);
    n2 = x/2;
    x = x - (n2*2);
    n1 = (x/1);
    x = x - (n1*1);
    z = x;//centavos
    n = v - z;//reais puro
    y = y-1;//contador
    med = v / y;
    printf("\n\nO valor final eh de %.0f reais e %.2f centavos\n",n,z);
    printf("A media eh de: R$ %.2f\n\n",med);
	printf("Notas de R$ 100,00: %d\n",n100);
    printf("Notas de R$ 50,00: %d\n",n50);
    printf("Notas de R$ 20,00: %d\n",n20);
    printf("Notas de R$ 10,00: %d\n",n10);
    printf("Notas de R$ 5,00: %d\n",n5);
    printf("Notas de R$ 2,00: %d\n",n2);
    printf("Moedas de R$ 1,00: %d",n1);
return 0;}