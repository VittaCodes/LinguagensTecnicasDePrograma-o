#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	
	
	
		int  a,b,c;
	int resultado;
	
	printf("Isira os valores de  A,B,C:");
	scanf("%d %d %d" ,&a,&b,&c);
	
    if(a>b){
    	resultado = a;
	}
	else{
		resultado = b;
	}
	 if(c>resultado) { 
	 	resultado = c;
    }
	
	 
	 printf("%d eh o maior",resultado);*/
	
	




  int a;
  int resultado;
  
  printf("Escreva o numnero:");
  scanf("%d",&a);
  
  if(a>0){
  	resultado = a*-1;
  }
  else{
  	resultado = a*a;
  }
  printf("%d",resultado);
  
  
  
	return 0;
	
}
 
 

 




