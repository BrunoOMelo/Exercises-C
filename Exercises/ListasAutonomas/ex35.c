#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
		
float n1,n2;


	printf("Digite o valor do primeiro cateto :");
	scanf("%f",&n1);
	
	printf("Digite o valor do segundo cateto :");
	scanf("%f",&n2);
	
	
	printf("\nValor da hipotenusa:%.2f\n",sqrt((n1*n1)+(n2*n2)));
	
	
	
	system("PAUSE");
	return 0;
	
}
