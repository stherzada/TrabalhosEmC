# include <stdio.h>
# include <locale.h>
# include <stdbool.h>
#define NYA 8

int vet[NYA]={1,2,4,5,3,8,-6,9}, x, c;

void imprimir ();
void insertSort (int v[NYA], int n);

void main (void) {
	setlocale (LC_ALL, "Portuguese");
	printf ("~~~~ Exercício 1 ~~~~");
	printf ("\nVetor na ordem que foi apresentada: " );
	imprimir ();
	printf("\n");
	insertSort (vet,NYA);
	printf("\nDepois de ter executado o código: " );
	imprimir ();	
}
void imprimir(){
    int s;
   for (s = 0; s < NYA; s++) printf ("%d\t-\t", vet[s]);
}
void insertSort(int v[NYA],int n)
{
    int j;
    for (j = 1; j < n; ++j) {
        x = v[j];
        int i;
        for (i = j-1; i >= 0 && v[i] > x; --i){
            v[i+1] = v[i];
            c++;
            printf("Iteração %d:\t",c);
            imprimir();printf("\tx = %d\n",x); 
        }
        v[i+1] = x;
   }
}
*/

/*int vet[NYA]={1,2,4,5,3,8,-6,9}, x, c;

void imprimir ();
void insertSort (int v[NYA], int n);
void qtditeracao ();
void main (void) {
	setlocale (LC_ALL, "Portuguese");
	printf ("~~~~ Exercício 2 ~~~~");
	printf ("\nVetor na ordem que foi apresentada: " );
	imprimir ();
	printf("\n");
	insertSort (vet,NYA);
	printf("\nDepois de ter executado o código: " );
	imprimir ();
	printf("\n \n");
	qtditeracao ();	
}
void imprimir(){
    int s;
   for (s = 0; s < NYA; s++) printf ("%d\t-\t", vet[s]);
}
void insertSort(int v[NYA],int n)
{
    int j;
    for (j = 1; j < n; ++j) {
        x = v[j];
        int i;
        for (i = j-1; i >= 0 && v[i] > x; --i){
            v[i+1] = v[i];
            c++;
            printf("Iteração %d:\t",c);
            imprimir();printf("\tx = %d\n",x); 
        }
        v[i+1] = x;
   }
}
void qtditeracao () {
	printf("Teve %d iterações", c);

}*/

int vet[NYA]={1,2,4,5,3,8,-6,9}, x, c, bb;

void imprimir ();
void insertSort (int v[NYA], int n);
void buscaBinaria();
void main (void) {
	setlocale (LC_ALL, "Portuguese");
	printf ("~~~~ Exercício 3 ~~~~");
	printf ("\nVetor na ordem que foi apresentada: " );
	imprimir ();
	printf("\n");
	insertSort (vet,NYA);
	printf("\nDepois de ter executado o código: " );
	imprimir ();
	printf ("\n");
    buscaBinaria();
}
void imprimir(){
    int s;
   for (s = 0; s < NYA; s++) printf ("%d\t-\t", vet[s]);
}
void insertSort(int v[NYA],int n)
{
    int j;
    for (j = 1; j < n; ++j) {
        x = v[j];
        int i;
        for (i = j-1; i >= 0 && v[i] > x; --i){
            v[i+1] = v[i];
            c++;
            printf(" Iteração %d:\t",c);
            imprimir();printf("\tx = %d\n",x); 
        }
        v[i+1] = x;
   }
}
void buscaBinaria(){
    printf(" Insira um número para verificar se ele esta no vetor\n");
    scanf("%d",&bb);

    int direita, esquerda, meio; 
    bool encontrado = 0; 
    esquerda = 0; 
    direita = NYA - 1;

    while(esquerda<=direita && !encontrado){
        meio=(direita+esquerda)/2;
        printf("\n Meio do vetor =\tvetor[%d] = %d",meio,vet[meio]);
        if (vet[meio] == bb) encontrado = 1;
         else if (bb < vet[meio]) direita = meio - 1;
         else esquerda = meio + 1; 
    }

    printf("\n\n");

    if(encontrado) printf(" O número digitado: %d \n é pertencente ao vetor e está na posição %d.\n\n",bb ,meio);
    else printf(" O número não pertence ao vetor.\n\n");
}

