#include <stdio.h>
#include <locale.h> 


void main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	int cont = 0;
	long long int numero;
	
	printf ("OBS: O n�mero m�ximo que pode ser lido � at� 20 d�gitos.\n");
	printf ("\nDigite um n�mero para ter os seus d�gitos contados: ");
	scanf ("%llu", &numero);
	printf ("\nEste n�mero possui: %d digitos", contarNumero (numero, cont));
	
}

int contarNumero(long long int num, int contNum){
	if (num<0){
		num=num*(-1);
	}
	
	if(num>0){
		++contNum;
		num=num/10;
		contarNumero (num, contNum);
	}	else {
		return contNum;
	}
}
