#include <stdio.h>
#include <locale.h>
int main (void)
{
	setlocale(LC_ALL,"Portuguese");
	float n1, n2, med;
	
	printf ("Digite a 1� nota: ");
	scanf ("%f",&n1);
	printf ("Digite a 2� nota: ");
	scanf ("%f",&n2);
	
	med = (n1+n2)/2;
	printf ("\nSua m�dia � %.2f", med);
	
	if(med>=7) printf("\nAprovado");
	else if (med<5) printf ("\nReprovado");
		 else  printf("\nExame");
	
	return 0;
	
	
}
/*{
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf ("Digite o n�mero: ");
	scanf("%d",&num);
	if (num > 0) printf("\nPositivo");
	else if (num<0) ("\nNegativo");
		 else printf("\nNulo");
	
	return 0;

}*/
/*{ setlocale (LC_ALL, "Portuguese");
  int num1, num2;
  	printf ("Digite um n�mero: ");
	scanf ("%d",&num1);
	printf ("Digite outro n�mero: ");
	scanf ("%d",&num2);
	
	if (num1==num2) printf("\nS�o iguais");
	else if (num1>num2) printf ("\n O maior n� lido � %d", num1);
		else printf ("\n O maior n� lido � %d", num2);
  
}*/
 	
/*{ 
setlocale(LC_ALL,"Portuguese");
float P, H, IMC;
		printf("Digite o seu peso: ");
		scanf("%f",&P);
		printf("Digite a sua altura: ");
		scanf("%f",&H);
		IMC = P / (H * H);
		printf("O seu indice de massa corporal �: %.2f \n",IMC );
		if (IMC < 18.5) printf("A sua classifica��o �: abaixo do peso");
		else if (IMC >=18.6 == IMC <=24.9)
			printf("A sua classifica��o �: normal");
			else if (IMC >=25.0 == IMC <=29.9)
				printf("A sua classifica��o �: levemente acima do peso");
					else if(IMC >=30.0 == IMC <=34.9) printf("A sua classifica��o �: obesidade grau I");
							else if(IMC >=35.0 == IMC <=39.9) printf("A sua classifica��o de imc �: obesidade grau II (Severa)");
						 	else printf("A sua classifica��o de imc �: obesidade grau III (M�rbida)");
							 	 
	}*/
	
/*{

	setlocale(LC_ALL, "Portuguese");
	float n1,n2,n3,med;
	printf("Digite a 1� nota: ");
	scanf("%f",&n1);
	printf("Digite a 2� nota: ");
	scanf("%f",&n2);
	printf("Digite a 3� nota: ");
	scanf("%f",&n3);
	
	med=(n1+n2+n3)/3;
	printf ("A sua m�dia �: %f",med);
		if (med>=9) printf("\nConceito A");
		else if (med>=7) printf("\n Conceito B");
			else if (med>=5) printf("\n Conceito C");
			else if (med>=3) printf ("\n Conceito D");
				else printf("\n Conceito E");
}*/
