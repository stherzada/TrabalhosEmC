#include <stdio.h>

#include <malloc.h>



// estrutura de dados Fila (não representa uma tipagem de dados)

// não possui typedef -> não é a definição de um tipo de dado.





//declarações



struct Fila{

   int capacidade;

   float *dados;

   int primeiro;

   int ultimo;

   int nItens;

};







//funções

void criarFila(struct Fila *f,int c);

void inserir(struct Fila *f, float v);

float remover(struct Fila *f);

int estaVazia(struct Fila *f);

int estaCheia(struct Fila *f);









void main(void){

   int opcao, capa;

   float valor;

   struct Fila umaFila;



   //cria a fila

   printf("\nCapacidade da fila?");

   scanf("%d",&capa);

   criarFila(&umaFila, capa);



   //apresenta menu

   while(1){

      printf("\n1 - Inserir elemento\n2 - Remover")

   }







}









void criarFila(struct Fila *f,int c){

   f->capacidade = c;

   f->dados = (float*) malloc (f->capacidade * sizeof(float));

   f->primeiro = 0;

   f->ultimo = -1;

   f->nItens = 0;   

}



void inserir(struct Fila *f, float v){

   if(f->ultimo == f->capacidade-1) f->ultimo = -1;

   f->ultimo++;

   f->dados[f->ultimo] = v;

   f->nItens++;

}



float remover(struct Fila *f){

   float temp = f->dados[f->primeiro];

   f->primeiro++;

   if(f->primeiro == f->capacidade)

      f->primeiro = 0;

   f->nItens--;

   return temp;

}



int estaVazia(struct Fila *f){

   return(f->nItens == 0);

}



int estaCheia(struct Fila *f){

   return(f->nItens == f->capacidade);

}



void mostrarFila(struct Fila *f){

   int cont, i;

   for (cont=0, i =(f->primeiro);cont < f->nItens; cont++){

      printf("%.2f\t",f->dados[i++]);

      if(i == f->capacidade) i = 0;

   }

      if(i == f->capacidade) i = 0;

   }

   printf("\n\n");

}


