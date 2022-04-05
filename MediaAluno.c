#include <stdio.h>
#include <malloc.h>

struct notaAluno {
	int ra;
	int nota1;
	int nota2;
	int nota3;
	float media;
};

typedef struct notaAluno nota;

void main(){
	nota aluno;
	aluno.ra = 6152;
	aluno.nota1 = 8;
	aluno.nota2 = 6;
	aluno.nota3 = 10;
	aluno.media = (aluno.nota1+aluno.nota2+aluno.nota3)/3;
	
	printf("Ra: %d", aluno.ra);
	printf("\nMedia: %d", aluno.media);
}
