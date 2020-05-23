/* Exercícios Ponteiros
	
	4) Escreva uma função que recebe uma data no formato ddmmaaaa, e devolve o dia, o mês e o ano separadamente.
*/

#include <stdio.h>

void separa_data(int, int*, int *, int*);

int main()
{
	int data, dia, mes, ano;
	printf("Informe uma data no formato ddmmaaaa: ");
	scanf("%d", &data);
	separa_data(data, &dia, &mes, &ano);
	printf("Data: %02d/%02d/%d\n", dia, mes, ano);
	return 0;
}

void separa_data(int dt, int * pd, int * pm, int * pa)
{
	*pd = dt / 1000000;
	*pm = (dt / 10000) % 100;
	*pa = dt % 10000;
}
