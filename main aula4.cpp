#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
	
	int primeiro, segundo, aux;
	
	printf("Digite o primeir Valor");
	scanf("%d", &primeiro);
	printf("Digite o segundo Valor");
	scanf("%d", &segundo);	

	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
		
	printf("seus resultados foram: %d, %d",primeiro, segundo );
	
	
	
	double valor;
	
	printf("\n escreva o valor com ponto");
	scanf("%lf", valor);
	
	printf("valor em notacao cientifica = %e\n", valor);
	
	
	
	return 0;
	
}
