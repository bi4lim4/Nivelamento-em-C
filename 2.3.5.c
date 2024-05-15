#include <stdio.h>

int main(){

	int num1, num2, quantidade;
	
	printf("\nQuantas vezes deseja repetir o codigo?: ");
	scanf("%i", &quantidade);
	
	int i;
	for (i = 1; i <= quantidade; i++){
		printf("\nDigite dois numeros inteiros, respectivamente: ");
		scanf("%i %i", &num1, &num2);
		
		if (num1 > num2){
			printf("\n%i eh maior", num1);
		} else if (num2 > num1){
			printf("\n%i eh maior", num2);
		} else {
			printf("\nNumeros iguais");
		}
		
	}
	
	

	

return 0;	
}
