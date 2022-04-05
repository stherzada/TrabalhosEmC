# include <stdio.h>

# include <locale.h>

# include <stdbool.h>



#define TAM 10



int vetor[TAM]; // nome para um conjunto de 10 números inteiros





void main(void){

   setlocale(LC_ALL,"Portuguese");

   int i, num;







   vetor[0] = 3;

   vetor[1] = 5;

   vetor[2] = 7;

   vetor[3] = 11;

   vetor[4] = 21;

   vetor[5] = 35;

   vetor[6] = 42;

   vetor[7] = 59;

   vetor[8] = 72;

   vetor[9] = 88;





   printf("Insira um número para verificar se ele pertence ao vetor\n");

   scanf("%d",&num);







   int direita, esquerda, meio; 

   bool encontrado = 0; /*Falso*/ 

   esquerda = 0; 

   direita = TAM - 1;

   /*

   meio = (esquerda+direita)/2;



   printf("\nO valor da esquerda %d",vetor[esquerda]);

   printf("\nO valor da direita %d",vetor[direita]);

   printf("\nO valor do meio %d",vetor[meio]);

*/



   while(esquerda<=direita && !encontrado){   // operador ! = not

      meio=(direita+esquerda)/2;



      printf("\nO valor do meio %d",vetor[meio]);



      if (vetor[meio] == num) encontrado = 1; /*Verdadeiro*/

       else if (num < vetor[meio]) direita = meio - 1;

       else esquerda = meio + 1; 

   }











/*





   for(i = 0;i < TAM;i++){

      if(num == vetor[i]){

         posicao = i;

         break;

      }         

   }   



*/   



   printf("\n\n");



   if(encontrado) printf("O número pertence ao vetor e está na posicao %d\n\n",meio);

   else printf("O número não pertence ao vetor\n\n");   

}
