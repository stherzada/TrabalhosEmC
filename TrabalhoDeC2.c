#include <stdio.h>
#include <locale.h>



void main(void){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, resultado;

    printf("Digite dois números, o primeiro será um número qualquer, e o segundo será a quantidade de vezes que o primeiro será elevado.");
    printf("\nDigite o primeiro número: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo número: ");
    scanf("%d", &num2);
    resultado = num1;
    printf("\n\nO resultado da operação é: %d", elevarNumeros(num1, num2, resultado));
}


int elevarNumeros(int n1, int n2, int resultado){

    int aux;

    if (n2 == 0)
        return 1;

    if(n2>1){

        aux = resultado * n1;
        resultado = aux;
        return elevarNumeros(n1, --n2, resultado);
    } else {
        return resultado;
    }

}
