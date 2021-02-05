#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
		
float n1,n2;


	printf("Digite o valor da hora de trabalho em reais :");
	scanf("%f",&n1);
	printf("Digite a quantidade de horas trabalhadas :");
	scanf("%f",&n2);
	
	
	
	printf("\nValor do salario :%.2f\n",(n1*n2)*1.1);
	
	
	
	system("PAUSE");
	return 0;
	
}
