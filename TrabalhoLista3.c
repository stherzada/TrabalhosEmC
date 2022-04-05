#include <stdio.h>
# include <locale.h>
# include <stdbool.h>
# define NYA 11
int vet[NYA] = {330, 108, 383, 362, 269, 175, 276, 301, 387, 422, 328};


void decrescente(int v[NYA], int n);
void imprimir();



void main (void){ 
setlocale(LC_ALL, "Portuguese"); 
printf("------------------------------------Exercício 2------------------------------------\n");
printf("-----------------------Ordenando o vetor em ordem decrescente-----------------------\n");
printf("------INSPIRADO NO EXERCÍCIO 1-----\n");
printf("Vetor sem seleção: ");
imprimir();
printf("\n\n");
decrescente(vet, NYA);
printf("\n");
printf("Vetor com seleção: ");
imprimir();
}

void decrescente (int vet [NYA], int n){
	int i, j, x, y;
	for (i=0;i<n-1;++i){
		x=i;
		for (j=i+1;j<n;++j) {
			if (vet[j]>vet[x]) x=j;
		}
	y=vet[i];
	vet[i]=vet[x];
	vet[x]=y;
		}
}

void imprimir(){
int i;
for(i = 0;i < NYA;i++){
if(i!=NYA-1) printf("%d\t-\t",vet[i]);
else printf("%d ",vet[i]);
}
}

