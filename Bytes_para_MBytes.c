/* Exercícios Ponteiros
	
	3) Escreva uma função que recebe o tamanho de um arquivo em bytes e devolve o tamanho desse arquivo em KB e MB.
*/

#include <stdio.h>

void tamanho_arquivo (int, double *, double *);

int main ()
{
	int bytes;
	double kbytes, mbytes;
	printf("Informe o tamanho do arquivo em bytes: ");
	scanf("%d", &bytes);
	tamanho_arquivo(bytes, &kbytes, &mbytes);
	printf("Tamanho de arquivo em KB: %.2lf\n", kbytes);
	printf("Tamanho de arquivo em MB: %.2lf\n", mbytes);
	
	return 0;
}

void tamanho_arquivo(int b, double * pkb, double * pmb)
{
	*pkb = b / 1024.0;
	*pmb = *pkb / 1024;
}
