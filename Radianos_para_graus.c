/* Exerc�cios Ponteiros
	
	1) Criar uma fun��o em C que receba como par�metro o valor de um �ngulo em radianos e converta-o para graus. 
	Obs.: O par�metro passado na chamada � fun��o deve ser alturado para graus
	Dica: graus = radianos*180/Pi
*/

#include <stdio.h>
#define M_PI 3.14159265

void rad_para_graus(double*);

int main ()
{
	double angulo;
	printf("Informe um angulo em radianos: ");
	scanf("%lf", &angulo);
	rad_para_graus(&angulo);
	printf("Angulo em graus: %.2lf\n", angulo);
	return 0;
}
void rad_para_graus(double * pang)
{
	*pang = *pang * 180 / M_PI;
}

