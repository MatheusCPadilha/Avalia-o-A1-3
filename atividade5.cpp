#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){
int randon, resposta;
srand(time(NULL));
randon = rand() % 10;

 do{
 
 printf("Digite um numero:");
 scanf(" %d", &resposta);
 if (resposta > randon){
 	printf("Errado! Muito alto!\n\n");
 	
 }else if (resposta < randon){
 	printf("Errado! Muito baixo!\n\n");
 	
 }else if (resposta == randon){
 	printf("Parabens! aceitou! o numero era %d", randon);
 }else{
 }

}while(resposta != randon);

return 0;
}
