#include <stdio.h>

int main(){
	
	int numero, i; //i � contador
	/*varial com valor inicial; condi��o de parada; incrento*/
	
	
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
