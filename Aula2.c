#include <stdio.h>		//uso de cabeçalhos e bibliotecas

#include <stdbool.h>	//uso do tipo de dado lógico





#include <stdlib.h>

#include <ctype.h>

#include <conio.h>





#include <locale.h>		// biblioteca locale



#define PI 3.1415		// constantes

#define MAX 10			// constantes

#define GRAU 150





int x = 10, y = 3;			// variavel global tipo de dados inteiro

float valor;				// variavel global tipo de dados decimal

char letra = 'B';			// variavel global tipo de dados caractere

bool logico = true;			//variavel global tipo de dados lógico (verdadeiro ou falso) 

unsigned int idade;			// utilização do operador unsigned para a variavel 

							//atribuir apenas numeros positivos 



void main(void){		// metodo principal 

	

	setlocale(LC_ALL,"Portuguese"); // utilizando a linguagem Portugues

	

	x = 12;					// atribuição a variavel

	

	int idade2 = 29;		// variavel local tipo de dados inteiro

	

	printf("O valor de X é :%d\n",x);

	printf("O valor da constante MAX = %d\n",MAX);

	printf("%f\n",PI);

	

	idade = -12;

	printf("O valor da idade é %d",idade);

	

	

	int taxa = 5;			



	x = GRAU*taxa;  

	printf("\n\nValor de x: %d", x);

	

	x = 10;

	y = ++x;

	

	printf("\n\nValor de x = %d\nValor de y = %d\n",x,y);

	

	x = 3;

	y = 5;

	

	x += y; 		// equivalente a -> x = x + y;

	

	printf("\n Valor de x = %d",x); 

	

	// operadores relacionais === comparação

	x = 12;

	y =	14;

	int z = 8;

	

	printf("\nO valor de x é igual a y? %d", x == y);

	

	// com uma estrutura condicional

	if(x == y){

		printf("\nO valor é igual");

	}else{

		printf("\nO valor é diferente");

	}

	

	if(x != y) printf("\n (If Simples) O valor é diferente");

	if(x > y) printf("\n O valor de X é maior que Y");

	if(x < y) printf("\n O valor de X é menor que Y");	

	if(x >= y) printf("\n O valor de X é maior ou igual que Y");

	if(x <= y) printf("\n O valor de X é menor ou igual que Y");

	

	//Operadores lógicos

	if((x < y) && (x > z)) printf("\nA variável Z é a menor");

	if((x < y) || (x > z)) printf("\nA variável X é menor que Y Ou a variável X é maior que Z");

	if(!((x < y) && (x > z))) printf("\nA variável Z não é a menor");



	int i = 20 ,j;

	

	j = i > 15 ? 8 : -5;

	

	printf("\nO valor de J é %d",j);



	if(i>15) j = 8;

	else j = -5;

	

	printf("\nO valor de J é %d",j);

	

	

	

	int k = -10;

	unsigned int m = 20;

	float n = 7.32;



	// Exibe na tela o caractere nova linha e o texto 

	printf("\n\nTeste de printf");	



	/* Exibe na tela o caractere nova linha, texto

	  e valor de variáveis */		

	printf("\nk: %d\nm: %u\n\tn:	%f",k,m,n);

	

	

/*

	

	float ab;

	

	printf("\n\nDigite um número de ponto flutuante: ");

	// Lê o número do teclado

	scanf("%f", &ab);

	printf("\nVoce digitou %.2f",ab); 

	printf("\n\n----------------------");

	





	/*

	char ch;

  ch = getchar();

  putchar(ch);

  */





	// laços de repetição

	printf("\n\nWHILE");	

	int t = 0;

	while(t < 10){		// laço de repetição que executa nenhuma ou mais vezes não enumerável

		t++;

		printf("\nO valor de t é %d",t);

		

	}

11:03
	printf("\n\nDO WHILE");

	

	t = 0;

	do{					// laço de repetição que executa uma ou mais vezes não enumerável

		t++;

		printf("\nO valor de t é %d",t);

	}while(t < 10);

	

	printf("\n\nFOR");

	

	

	for(i=0;i<10;i++){ // laço de repetição um número conhecido de vezes (enumerável)

		printf("\nO valor de i é %d",i);

	}

	

	

	printf("\n\nBREAK\n");

	int cont;

	for(cont = 1; cont <= 10; cont++) {

	 	printf("\n%d ", cont);

	 	if(cont == 2)

		 	break;

  }

  

  // exit(0); //ou return (0);// executa o fim do programa antecipadamente

  

  	printf("\n\nFOR");

  	

  	char vogal;

	printf("\nDigite uma vogal: ");

	scanf ("%c",&vogal);

	switch (vogal) {

		case 'a': vogal='e';

		   break;

		case 'e': vogal='i';

		   break;

		case 'i': vogal='o';

		   break;

		case 'o': vogal='u';

		   break;

		case 'u': vogal='a';

		   break;

		default : 

			printf("Erro!A letra não é vogal");

	   		exit(0);

	}

	printf ("vogal seguinte: %c \n",vogal);





	



}
