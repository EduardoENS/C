#include <stdio.h>
#define MINIMUM2(x, y) ((x) < (y) ? x : y)

int main()
{
	double m, n;

    printf("-----------------------------------\n");
    printf(" CALCULAR MENOR ENTRE 2 NUMEROS \n");
    printf("-----------------------------------\n\n");

    printf("Digite o primeiro numero: ");
    scanf("%lf", &m);
    printf("Digite o segundo numero: ");
    scanf("%lf", &n);
    printf("\nO menor numero digitado foi %.2lf", MINIMUM2(m, n));

    return 0;
}
