#include <iostream>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */







//EX3
int main(int argc, char** argv) {
	
		int n,res;
		int bit64,bit32,bit16,bit8,bit4,bit2;
		
	printf("insira o valor a ser convertido: ");
	scanf("%d",&n);
	
	bit64 = n%2;
	res=n/2;
	
	bit32 = res%2;
	res=res/2;
	
	bit16 = res%2;
	res=res/2;
	
	bit8 = res%2;
	res=res/2;
	
	bit4 = res%2;
	res=res/2;
	
	bit2 = res%2;
	res=res/2;
	
	
	printf(" O numero %d em binario = %d%d%d%d%d%d%d",n, res%2,bit2,bit4,bit8,bit16,bit32,bit64);
	
	return 0;
}





