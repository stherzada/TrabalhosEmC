/*#include <stdio.h>

#include <locale.h>

#include <malloc.h>



#define TAM 5



int parVar;



int parVetor [TAM];



void main(void){

   setlocale(LC_ALL, "Portuguese");



   parVar = 2;



   parVetor[0] = 2;

   parVetor[1] = 12;

   parVetor[2] = 6;



   printf("%d\n\n", sizeof(int));



   int i;

   for(i = 0;i < TAM;i++){

      printf("%d, ",parVetor[i]);

   }



   printf("\n-------------------\n");



   // criando um ponteiro para a memória

   int *par;

   // imprimindo o endereço de "memória do compilador"

   printf("%d ,",&par);   





}*/
/*#include <stdio.h>

#include <locale.h>

#include <malloc.h>



#define TAM 5



int parVar;



int parVetor [TAM];



void main(void){

   setlocale(LC_ALL, "Portuguese");



   parVar = 2;



   parVetor[0] = 2;

   parVetor[1] = 12;

   parVetor[2] = 6;



   printf("%d\n\n", sizeof(int));



   int i;

   for(i = 0;i < TAM;i++){

      printf("%d, ",parVetor[i]);

   }



   printf("\n-------------------\n");



   // criando um ponteiro para a memória, mas não estamos reservando

   // a memória

   int *par;

   // imprimindo o endereço de "memória do compilador"

   printf("%d",&par);



   //reservando o endereco de memória

   par = (int*) malloc(1 * sizeof(int));

   // a ponteiro par tem 4 bytes reservados de memória



   par = 2; // armazenando 2 na memória dinamica Alocada (reservada)   

   printf("\n-------------------\n");

   printf("%d",par);



   // liberar a reserva da memória

//   free(par);



   printf("\n-------------------\n");

   //reservando o endereco de memória

   char *letra;

   letra = (char*) malloc(1*sizeof(char));



   letra = 'c';



   printf("%c",letra);







}*/
/*#include <stdio.h>

#include <locale.h>

#include <malloc.h>



#define TAM 5



int parVar;



int parVetor [TAM];



void main(void){

   setlocale(LC_ALL, "Portuguese");



   parVar = 2;



   parVetor[0] = 2;

   parVetor[1] = 12;

   parVetor[2] = 6;



   printf("%d\n\n", sizeof(int));



   int i;

   for(i = 0;i < TAM;i++){

      printf("%d, ",parVetor[i]);

   }



   printf("\n-------------------\n");



   // criando um ponteiro para a memória, mas não estamos reservando

   // a memória

   int *par;

   // imprimindo o endereço de "memória do compilador"

   printf("%d",&par);



   //reservando o endereco de memória

   par = (int*) malloc(1 * sizeof(int));

   // a ponteiro par tem 4 bytes reservados de memória



   par = 2; // armazenando 2 na memória dinamica Alocada (reservada)   

   printf("\n-------------------\n");

   printf("%d",par);



   // liberar a reserva da memória

//   free(par);



   printf("\n-------------------\n");

   //reservando o endereco de memória

   char *letra;

   letra = (char*) malloc(1*sizeof(char));



   letra = 'c';



   printf("%c",letra);



   printf("\n----------CHAR------------\n");



   printf("\n\n ----- ESTÁTICO -------\n");

   char nome[40];

   strcpy(nome,"Juliano é o professor da disciplina de ES1");

   for(i=0;i < 40;i++){

      printf("%c",nome[i]);

   }

   for(i = 0;i < 40; i++){

      nome[i]= " ";

   }



   printf("\n-------nome------\n");

   strcpy(nome,"Alberto");

   for(i=0;i < 40;i++){

      printf("%c",nome[i]);

   }



   for(i = 0;i < 40; i++){

      nome[i]= " ";

   }



   strcpy(nome,"Juliano Juliano é o professor da disciplina Juliano é o professor da discipli");



   printf("\n-------nome 2------\n");

   for(i=0;i < 40;i++){

      printf("%c",nome[i]);

   }



   printf("\n\n ----- DINÂMICO -------\n");   



   printf("\n-------nome 1------\n");



   char *nome2;

   nome2 = (char*) malloc(50*sizeof(char));

   strcpy(nome2,"Juliano Juliano é o professor da disciplina de ES1");

   for(i=0;i < 50;i++){

      printf("%c",nome2[i]);

   }



   printf("\n-------nome 2------\n");

   nome2 = (char*) malloc(71*sizeof(char));

      strcpy(nome2,"Juliano Juliano é o professor da disciplina de ES1 da disciplina de ES1");



   for(i=0;i < 71;i++){

      printf("%c",nome2[i]);

   }

      printf("\n-------nome 3------\n");

   nome2 = (char*) malloc(7*sizeof(char));

   strcpy(nome2,"Alberto");



   for(i=0;i < 7;i++){

      printf("%c",nome2[i]);

   }







}*/
#include <stdio.h>

#include <malloc.h>

#include <stdlib.h>



void main(void)

{

   float *notas;

   float media;

   int n, i;



   printf ("Digite o numero de notas que serao digitadas: ");

   scanf ("%d", &n); 



   while (n < 1){

      printf ("\n Numero invalido! Digite novamente. \n");

      scanf ("%d", &n); 

   };



  // aloca memória   

   notas = (float*) malloc (n * sizeof(float));



   if (notas == NULL) 

  {

     printf ("Nao ha memória suficiente!\n");

     return;

  }



   // Solicita a entrada das notas   

   for (i=0; i<n; i++)

  {

       printf ("Digite a %da. Nota: ", i+1);

      scanf ("%f", (notas+i));      // equivale a scanf ("%f", &notas[i]));

  }



  // calcula a media das notas 

  media = 0;

  for(i = 0; i < n; i++)

     media += *(notas+i);   //equivale a media += notas[i]

  media /= n;



  printf ("A media das notas e: %f\n", media);



  free (notas);      //desaloca a memória alocada previamente

}
