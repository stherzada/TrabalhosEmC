#include <stdio.h>
#include <locale.h>



void main(void){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, resultado;

    printf("Digite dois n�meros, o primeiro ser� um n�mero qualquer, e o segundo ser� a quantidade de vezes que o primeiro ser� elevado.");
    printf("\nDigite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo n�mero: ");
    scanf("%d", &num2);
    resultado = num1;
    printf("\n\nO resultado da opera��o �: %d", elevarNumeros(num1, num2, resultado));
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
