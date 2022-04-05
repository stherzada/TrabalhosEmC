#include <stdio.h>
#include <locale.h>

#define qtdVertices 6

int mAdj[qtdVertices][qtdVertices];

void imprimirMatriz();
void inicializar();
void vizinho ();



void main (void) {
	setlocale (LC_ALL, "Portuguese");
	printf("\nPopulando a matriz.");
                     
	//vertíce 1
	mAdj[0][1] = 1;
	mAdj[0][3] = 1;
	
	//vertíce 2
	mAdj[1][0] = 1;
	mAdj[1][2] = 1;
	
	//vertíce 3
	mAdj[2][1] = 1;
	
	//vertíce 4
	mAdj[3][0] = 1;
	mAdj[3][4] = 1;
	
	//vertíce 5
	mAdj[4][3] = 1;
	mAdj[4][5] = 1;
	
	//vertíce 6
	mAdj[5][4]= 1;
	
	imprimirMatriz();
	
	int v;
	printf("\nInsira um vértice de:");
	printf ("\n1 até %d para encontrar seus vizinhos \n", qtdVertices);
	scanf("%d", &v);
	
	vizinho (v);
}
	


void imprimirMatriz(){
	printf("\n\n----- Matriz Adjacência -----");
	int i, j;
	for(i = 0;i < qtdVertices;i++){
		printf("\n| ");
		for(j = 0;j < qtdVertices; j++){
			printf("\t%d",mAdj[i][j]);
		}
		printf(" |");
	}
	
}

void inicializar(){
	int i, j;
	for(i = 0;i < qtdVertices;i++){
		for(j=0;j < qtdVertices;j++){
			mAdj[i][j] = 0;
		}
	}
}

void vizinho (int v)
{
	printf("\n O vizinho do vértice %d é (são):", v);
		
	v = v - 1;
	int j;
	for (j = 0; j<qtdVertices;j++){
		if (mAdj[v][j] == 1){
			printf("%d,", j+1 );
		}
	}
	
}


    
