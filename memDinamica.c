#include <stdio.h>
#include <locale.h>
#include <malloc.h>
#include <string.h>

// definição de uma lista simples

typedef struct{
	char nome[20];
	char endereco [80];
	struct Pessoa *proxima; 
}Pessoa;



void main(void){
	setlocale(LC_ALL, "Portuguese");
	
	Pessoa *p1;
	inicializarPessoa(&p1);
	

	inserirNaLista(&p1,"José","rua 5");
	inserirNaLista(&p1,"Ana","Rua 8");
	inserirNaLista(&p1,"Alan","Rua Andrade");
	inserirNaLista(&p1,"Giovana","Rua 19 nº 64");
	
	printf("\nNome\t\tEndereço\n");
	exibirTodos(&p1);
	
	printf("\nA quantidade de pessoas na lista = %d\n", qtdElementos(&p1));	
	
	removerPessoaDaLista(&p1,"Alan");
	
	printf("\nNome\t\tEndereço\n");
	exibirTodos(&p1);
	printf("\nA quantidade de pessoas na lista = %d\n", qtdElementos(&p1));	
	
	buscarPessoaNaLista(&p1, "Alan");
		
}

// aqui criamos o ponteiro da pessoa p1
void inicializarPessoa(Pessoa **pessoa){
	*pessoa = NULL;
	printf("Pessoa Inicializada");	
}

void inserirNaLista(Pessoa **pessoa,char auxNome[20],char auxEndereco[80]){
	if(*pessoa == NULL){
		*pessoa = (Pessoa *) malloc(sizeof(Pessoa));
		
		strcpy((*pessoa)->nome,auxNome);
		strcpy((*pessoa)->endereco,auxEndereco);
		(*pessoa)->proxima = NULL;
	}else{
		inserirNaLista(&((*pessoa)->proxima),auxNome,auxEndereco);
	}
}

void exibirTodos(Pessoa **pessoa){

	if(*pessoa != NULL){
		printf("%s\t\t%s\n",(*pessoa)->nome,(*pessoa)->endereco);
		if((*pessoa)->proxima != NULL){
			exibirTodos(&((*pessoa)->proxima));
		}
	}else{
		printf("\nFim da Lista\n");
	}
}

int qtdElementos(Pessoa **pessoa){         	// recursividade indireta
	int contador = 0;
	return contar(pessoa, contador);	
}

int contar(Pessoa **pessoa, int contador){  	// recursividade direta
	if(*pessoa != NULL){
	
		contar(&((*pessoa)->proxima), ++contador);
			
	}else return contador;	 
}

void apagarListaPessoa(Pessoa **pessoa){
	if(*pessoa != NULL){
		apagarListaPessoa(&((*pessoa)->proxima));
		(*pessoa) = NULL;
		free (*pessoa);
	}		
}

void removerPessoaDaLista(Pessoa **pessoa, char auxNome[20]){
	Pessoa *auxPessoa;
	if((*pessoa) != NULL){
		if(strcmp((*pessoa)->nome,auxNome) == 0){
			if((*pessoa)->proxima == NULL){
				(*pessoa) = NULL;
				free (* pessoa);
			}else{
				auxPessoa = *pessoa;
				*pessoa = (*pessoa)->proxima;
				auxPessoa->proxima = NULL;
				free (auxPessoa->proxima); 				
			}			
		}else{
			removerPessoaDaLista(&((*pessoa)->proxima),auxNome);
		}		
	}else{
		printf("O nome  %s não foi encontrado!\n",auxNome);
	}
}

void buscarPessoaNaLista(Pessoa **pessoa, char auxNome[20]){
	buscarPessoa(pessoa,auxNome,0);
}

void buscarPessoa(Pessoa **pessoa, char auxNome[20],int indice){
	Pessoa *auxPessoa;
	if((*pessoa) != NULL){
		if(strcmp((*pessoa)->nome,auxNome) == 0){
			printf("O nome  %s ENCONTRADO! na posição %d\n",auxNome,indice);	
		}else{
			buscarPessoa(&((*pessoa)->proxima),auxNome,++indice);
		}		
	}else{
		printf("O nome  %s não foi encontrado!\n",auxNome);
	}
}




