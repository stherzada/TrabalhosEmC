#include <stdio.h>
#include <locale.h> 


void main (void) {
	setlocale (LC_ALL, "Portuguese");
	
	int cont = 0;
	long long int numero;
	
	printf ("OBS: O número máximo que pode ser lido é até 20 dígitos.\n");
	printf ("\nDigite um número para ter os seus dígitos contados: ");
	scanf ("%llu", &numero);
	printf ("\nEste número possui: %d digitos", contarNumero (numero, cont));
	
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
