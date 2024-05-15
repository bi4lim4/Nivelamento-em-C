#include <stdio.h>

int main(){
	
	int numero, i; //i é contador
	/*varial com valor inicial; condição de parada; incrento*/
	
	
	for(i = 1; i <= 5; i++){
		printf("\nDigite um numero inteiro: ");
		scanf("%i", &numero); 
	
		if (numero >= 0){
			printf("\nPOSITIVO");
		} else{
			printf("\nNEGATIVO");
		} 
	}
	
	
	
return 0;	
}
