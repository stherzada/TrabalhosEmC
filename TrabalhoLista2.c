# include <stdio.h>
# include <locale.h>
# include <stdbool.h>
#define NYA 8

int vet[NYA]={1,2,4,5,3,8,-6,9}, x, c;

void imprimir ();
void insertSort (int v[NYA], int n);

void main (void) {
	setlocale (LC_ALL, "Portuguese");
	printf ("~~~~ Exerc�cio 1 ~~~~");
	printf ("\nVetor na ordem que foi apresentada: " );
	imprimir ();
	printf("\n");
	insertSort (vet,NYA);
	printf("\nDepois de ter executado o c�digo: " );
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
            printf("Itera��o %d:\t",c);
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
	printf ("~~~~ Exerc�cio 2 ~~~~");
	printf ("\nVetor na ordem que foi apresentada: " );
	imprimir ();
	printf("\n");
	insertSort (vet,NYA);
	printf("\nDepois de ter executado o c�digo: " );
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
            printf("Itera��o %d:\t",c);
            imprimir();printf("\tx = %d\n",x); 
        }
        v[i+1] = x;
   }
}
void qtditeracao () {
	printf("Teve %d itera��es", c);

}*/

int vet[NYA]={1,2,4,5,3,8,-6,9}, x, c, bb;

void imprimir ();
void insertSort (int v[NYA], int n);
void buscaBinaria();
void main (void) {
	setlocale (LC_ALL, "Portuguese");
	printf ("~~~~ Exerc�cio 3 ~~~~");
	printf ("\nVetor na ordem que foi apresentada: " );
	imprimir ();
	printf("\n");
	insertSort (vet,NYA);
	printf("\nDepois de ter executado o c�digo: " );
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
            printf(" Itera��o %d:\t",c);
            imprimir();printf("\tx = %d\n",x); 
        }
        v[i+1] = x;
   }
}
void buscaBinaria(){
    printf(" Insira um n�mero para verificar se ele esta no vetor\n");
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

    if(encontrado) printf(" O n�mero digitado: %d \n � pertencente ao vetor e est� na posi��o %d.\n\n",bb ,meio);
    else printf(" O n�mero n�o pertence ao vetor.\n\n");
}

