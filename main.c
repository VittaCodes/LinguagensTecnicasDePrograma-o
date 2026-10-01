#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float imc, peso, altura;
	
	printf("Escreva seu peso: ");
	scanf("%f", &peso);
	
	printf("Escreva sua altura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("\nSeu IMC e: %.2f\n", imc);
	
	if (imc < 18.5) {
		printf("Status: ABAIXO DO PESO\n");
	} 
	else if (imc >= 18.5 && imc <= 24.9) {
		printf("Status: PESO NORMAL\n");
	}
	else if (imc >= 25.0 && imc <= 29.9) {
		printf("Status: ACIMA DO PESO\n");
	}	
	else if (imc >= 30.0) {
		printf("Status: OBESIDADE\n");
	}
	
	return 0;
}


