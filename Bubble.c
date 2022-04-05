#include <stdio.h>
#define TAM 4

int vetor[TAM];
void bubbleSort();
void imprimir();

void main (void) {
    int i;
    vetor[0] = 30;
    vetor[1] = 100;
    vetor[2] = 5;
    vetor[3] = 422;


    printf("Primeiro Vetor: ");
    imprimir ();
    printf ("\n");
    bubbleSort(vetor, TAM);

}

void bubbleSort (int vetor[4], int n) {
    int i, j;
    for (i=0;i<TAM;i++) {
        for (j=0;j<(TAM-1); j++) {
            int x = vetor[j];
            if ( vetor[j] < vetor [j+1]) {

                vetor[j] = vetor[j+1];
                vetor[j+1] = x;
            }
            
        }
        imprimir();
    }
}

void imprimir(){
    int i;
    printf("\n");
       for(i = 0; i < TAM; ++i){
          printf("%d,\t", vetor[i]);
       }
}

