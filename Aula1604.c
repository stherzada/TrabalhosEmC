# include <stdio.h>

# include <locale.h>



#define TAM 10



int vetor[TAM]; // nome para um conjunto de 10 números inteiros



void insercaoSort(int v[TAM],int n);

void selectionSort(int v[TAM],int n);



void main(void){

   setlocale(LC_ALL,"Portuguese");

   int i, num;





   vetor[0] = 2;

   vetor[1] = 4;

   vetor[2] = 5;

   vetor[3] = 11;

   vetor[4] = 32;

   vetor[5] = 68;

   vetor[6] = 9;

   vetor[7] = -3;

   vetor[8] = 15;

   vetor[9] = 18;

   imprimir(vetor);

   selectionSort(vetor,TAM);

   imprimir(vetor);   

}



void insercaoSort(int v[TAM],int n)

{

  int j;

  for (j = 1; j < n; ++j) {

     int x = v[j];

     int i;     

     for (i = j-1; i >= 0 && v[i] > x; --i){

         v[i+1] = v[i];

    }

     v[i+1] = x;

  }

}





void selectionSort(int v[TAM],int n){

  int i,j,aux,posicaoMenor;

  for (i = 0; i < n-1; i++) {

     posicaoMenor = i;

     for (j = i+1; j < n; j++)



        if (v[j] < v[posicaoMenor])posicaoMenor = j;

     aux = v[i];

     v[i] = v[posicaoMenor];

     v[posicaoMenor] = aux;

     imprimir(v);

  }

}



void imprimir(int v[TAM]){

   int i;

   printf("\n");

   for(i = 0;i < TAM;i++){

      printf("%d,\t",v[i]);

   }   

}
int fat(int n);



/*void main(void){

   setlocale(LC_ALL,"Portuguese");

   int n = 432;

   printf("O fatorial de %d é igual a %d",n,fat(n));



}*/



int fat(int n){

   if(n == 0) 

      return 1;

   else

      return n*fat(n-1);

}
