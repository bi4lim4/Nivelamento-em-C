#include <stdio.h>

int main(){

	int numero, i;
	
	for (i = 1; i <=3; i++){
		
		printf("\nDigite um numero inteiro: ");
		scanf("%i", &numero);
		
		if (numero % 2 == 0){
			printf("\nEh par");
		} else {
			printf("\nEh impar");
		}

	}
	
	

return 0;	
}
