#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
		
float n;


	printf("Digite o valor total do produto :");
	scanf("%f",&n);
	
	
	printf("\nTotal a pagar com desconto de 10 por cento :%.2f\n",(n*0.90));
	printf("\nValor parcelamento 3x sem juros :%.2f\n",(n/3));
	printf("\nValor comissao do vendedor a vista :%.2f\n",((n*0.90)*0.05));
	printf("\nValor comissao do vendedor parcelado :%.2f\n",(n*0.05));
	
	
	
	system("PAUSE");
	return 0;
	
}
