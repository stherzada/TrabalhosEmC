#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

#define MAX 14

//representar as arestas
//lista de arestas

struct aresta{
	int VerOrigem;
	int VerDestino;
	float peso;
}aresta[MAX];

//declarações de funções
void inicializar();
void imprimir();

void main (void) {
	setlocale(LC_ALL, "portuguese");
	inicializar();
	imprimir();	
	
}

void inicializar() {
	aresta[0].VerOrigem= 1;
	aresta[0].VerDestino = 2;
	//aresta[0].peso = 1.0;
	
	aresta[1].VerOrigem= 1;
	aresta[1].VerDestino = 3;
	
	aresta[2].VerOrigem= 3;
	aresta[2].VerDestino = 4;
	
	aresta[3].VerOrigem= 3;
	aresta[3].VerDestino = 5;
	
	aresta[4].VerOrigem= 4;
	aresta[4].VerDestino = 6;
	
	aresta[5].VerOrigem= 6;
	aresta[5].VerDestino = 7;
	
	aresta[6].VerOrigem= 6;
	aresta[6].VerDestino = 8;
	
	aresta[7].VerOrigem= 8;
	aresta[7].VerDestino = 9;
	
	aresta[8].VerOrigem= 7;
	aresta[8].VerDestino = 9;	
	
	aresta[9].VerOrigem= 7;
	aresta[9].VerDestino = 10;
	
	aresta[10].VerOrigem= 9;
	aresta[10].VerDestino = 10;
	
	aresta[11].VerOrigem= 9;
	aresta[11].VerDestino = 11;
	
	aresta[12].VerOrigem= 10;
	aresta[12].VerDestino = 11;
		
	aresta[13].VerOrigem= 2;
	aresta[13].VerDestino = 4;
	
}

void imprimir (){
	printf("\n--------Lista de arestas-------\n");
	//printf("VerOrigem\tVerDestino\tpeso");
	int i;
	for (i=0; i < MAX;i++)
	printf("\n%d <=> %d ", aresta[i].VerOrigem, aresta[i].VerDestino, aresta[i].peso);
}
