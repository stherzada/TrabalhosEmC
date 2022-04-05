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
                     
	//vert�ce 1
	mAdj[0][1] = 1;
	mAdj[0][3] = 1;
	
	//vert�ce 2
	mAdj[1][0] = 1;
	mAdj[1][2] = 1;
	
	//vert�ce 3
	mAdj[2][1] = 1;
	
	//vert�ce 4
	mAdj[3][0] = 1;
	mAdj[3][4] = 1;
	
	//vert�ce 5
	mAdj[4][3] = 1;
	mAdj[4][5] = 1;
	
	//vert�ce 6
	mAdj[5][4]= 1;
	
	imprimirMatriz();
	
	int v;
	printf("\nInsira um v�rtice de:");
	printf ("\n1 at� %d para encontrar seus vizinhos \n", qtdVertices);
	scanf("%d", &v);
	
	vizinho (v);
}
	


void imprimirMatriz(){
	printf("\n\n----- Matriz Adjac�ncia -----");
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
	printf("\n O vizinho do v�rtice %d � (s�o):", v);
		
	v = v - 1;
	int j;
	for (j = 0; j<qtdVertices;j++){
		if (mAdj[v][j] == 1){
			printf("%d,", j+1 );
		}
	}
	
}


    
