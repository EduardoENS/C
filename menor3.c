#include<stdio.h>
#define MINIMUM2(x, y) ((x) < (y) ? (x) : (y))
#define MINIMUM3(x, y, z) MINIMUM2(MINIMUM2(x, y), z)

int main()
{
	double m, n, z;

    printf("-----------------------------------\n");
    printf(" CALCULAR MENOR ENTRE 3 NUMEROS \n");
    printf("-----------------------------------\n\n");

    printf("Digite o primeiro numero: ");
    scanf("%lf", &m);
    printf("Digite o segundo numero: ");
    scanf("%lf", &n);
    printf("Digite o terceiro numero: ");
    scanf("%lf", &z);
    printf("\nO menor numero digitado foi %.2lf", MINIMUM3(m, n, z));
    
	return 0;
}
