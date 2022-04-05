#include <stdio.h>
#include <locale.h>
#include <stdbool.h>


void main(void){
	setlocale(LC_ALL, "Portuguese");
	
	long long int numN;
	int digitos, numK, contNum = 0;
	bool valido = true;
	
	printf("Digite dois números, o primeiro será um número qualquer, e o segundo será o dígito a ser procurado no primeiro.");
	printf("\nDigite o primeiro número: ");
	scanf("%llu", &numN);
	printf("Digite o número a ser procurado no segundo: ");
	scanf("%d", &numK);
	
	while(numK / 10 > 0){
		numK = numK / 10;
		valido = false;
	}
	
	if(!valido){
		printf("\n\nO segundo número digitado foi inválido, e foi substituído por apenas: %d", numK);
	}
	
	digitos = encontrarDigito(numN, numK, contNum);
	
	if(digitos == 0){
		printf("\n\nO número: %d não foi encontrado nenhuma vez dentro de %llu!", numK, numN);
	}else {
		if(digitos == 1){
			printf("\n\nO número: %d foi encontrado 1 vez dentro de %llu!", numK, numN);
		}else {
			printf("\n\nO número: %d foi encontrado %d vezes dentro de %llu!", numK, encontrarDigito(numN, numK, contNum), numN);
		}
	}
}


int encontrarDigito(long long int num1, int num2, int contNum){
	
	if (num1 < 0){
		num1 = num1 * (-1);
	}
	if(num1 > 0){
		if(num1 % 10 == num2){
			++contNum;
		}
		num1 = num1/10;
		encontrarDigito(num1, num2, contNum);
	}else {
		return contNum;
	}
	
}
