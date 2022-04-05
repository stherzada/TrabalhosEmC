#include <stdio.h>
#include <locale.h> 
#include <string.h>
#include <malloc.h>

typedef struct{
	char nome[50];
	struct Musica *avancar;
}Musica;

void inicializarMusica(Musica **musica);
void inserirMusica(Musica **musica,char sMusica[50]);



void main (void) {
	setlocale (LC_ALL, "Portuguese");
	Musica *s;
	inicializarMusica(&s);
	printf("\n\n");
	inserirMusica(&s,"Sugar Wraith");
	inserirMusica(&s,"Escape from La");
	inserirMusica(&s,"Hurt You");
	inserirMusica(&s,"As The World Caves In");
	inserirMusica(&s, "As long is love me");
	
}
void inicializarMusica(Musica **musica){
	*musica = NULL;
	printf("A lista foi inicializada");	
}

void inserirMusica(Musica **musica,char sMusica[50]){
	if(*musica == NULL){
		*musica = (Musica *) malloc(sizeof(Musica));
		strcpy((*musica)->nome,sMusica);
		(*musica)->avancar = NULL;
		printf("%s inserida na lista\n \n", sMusica);
	}else{
		inserirMusica(&((*musica)->avancar),sMusica);
	}
}



