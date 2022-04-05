#include <stdio.h>
#include <locale.h>
#include <stdbool.h>


void main(void){
	setlocale(LC_ALL, "Portuguese");
	
	long long int numN;
	int digitos, numK, contNum = 0;
	bool valido = true;
	
	printf("Digite dois n�meros, o primeiro ser� um n�mero qualquer, e o segundo ser� o d�gito a ser procurado no primeiro.");
	printf("\nDigite o primeiro n�mero: ");
	scanf("%llu", &numN);
	printf("Digite o n�mero a ser procurado no segundo: ");
	scanf("%d", &numK);
	
	while(numK / 10 > 0){
		numK = numK / 10;
		valido = false;
	}
	
	if(!valido){
		printf("\n\nO segundo n�mero digitado foi inv�lido, e foi substitu�do por apenas: %d", numK);
	}
	
	digitos = encontrarDigito(numN, numK, contNum);
	
	if(digitos == 0){
		printf("\n\nO n�mero: %d n�o foi encontrado nenhuma vez dentro de %llu!", numK, numN);
	}else {
		if(digitos == 1){
			printf("\n\nO n�mero: %d foi encontrado 1 vez dentro de %llu!", numK, numN);
		}else {
			printf("\n\nO n�mero: %d foi encontrado %d vezes dentro de %llu!", numK, encontrarDigito(numN, numK, contNum), numN);
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
