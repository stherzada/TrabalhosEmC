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
void MusicaLista (Musica **musica);
void ProcurarMusica(Musica **musica, char sMusica[50], int indice);
void removerMusica(Musica **musica,char sMusica[50]);
void ApagarLista (Musica **musica);
void TextoMusica (Musica **musica);
int qtElementos(Musica **musica);
int contar (Musica **musica, int contador);

void main (void) {
	setlocale (LC_ALL, "Portuguese");
	Musica *s;
	inicializarMusica(&s);
	printf("\n\n");
	inserirMusica(&s,"Sugar Wraith");
	inserirMusica(&s,"Escape from La");
	inserirMusica(&s,"Hurt You");
	inserirMusica(&s,"As The World Caves In");
	MusicaLista(&s);
	ProcurarMusica(&s, "Hurt You", 0);
	removerMusica(&s, "As The World Caves In");
	printf ("Os elementos que estão na lista são %d \n", qtElementos(&s));
	TextoMusica (&s);
	MusicaLista(&s);
	
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

void MusicaLista (Musica **musica){
	if (*musica !=NULL){
		printf ("%s \n",(*musica)->nome);
		if ((*musica)->avancar !=NULL){
			MusicaLista (&((*musica)->avancar));
		}
	
}  else {
			printf ("\n Não tem nada na lista!\n");
		}
	}
	
void ProcurarMusica(Musica **musica, char sMusica[50], int indice){
	if ((*musica) !=NULL){
		if (strcmp ((*musica)->nome, sMusica) == 0) {
		printf("A musica %s foi encontrada na posição %d posição \n", sMusica, indice+1);
		}else {
			ProcurarMusica(&((*musica)->avancar), sMusica, ++indice);
		}
	} else {
		printf ("Esta musica %s não foi encontrada!\n", sMusica);
	}
}

void removerMusica(Musica **musica,char sMusica[50]){
	Musica *auxMusic;
	if((*musica) != NULL){
		if(strcmp((*musica)->nome,sMusica) == 0){
			if((*musica)->avancar == NULL){
				(*musica) = NULL;
				free (* musica);
				printf("\nA musica %s foi excluida com sucesso\n\n", sMusica);
			}else{
				auxMusic = *musica;
				*musica = (*musica)->avancar;
				auxMusic->avancar = NULL;
				free (auxMusic->avancar);
	          	}			
		}else{
			removerMusica(&((*musica)->avancar),sMusica);
		}
	}else{
		printf("O nome  %s não foi encontrado!\n",sMusica);
	}
}

void ApagarLista (Musica **musica){
	if (*musica != NULL){
	
	ApagarLista(&((*musica)->avancar));
	(*musica) = NULL;
	free (*musica);
}
}

void TextoMusica (Musica **musica)
{
	 printf("\n A lista foi apagada com sucesso \n");
	 ApagarLista(musica);
}

int qtElementos(Musica **musica){
	int contador = 0;
	return contar (musica, contador);
}

int contar (Musica **musica, int contador){
		if (*musica !=NULL) {
			contar (&((*musica)->avancar),++contador);
		} else return contador;
	
	}


