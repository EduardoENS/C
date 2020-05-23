/* Exerc�cios Ponteiros
	
	2) Criar uma fun��o em C que receba um n�mero decimal e converta-o para bin�rio. 
	Obs.: O par�metro passado na chamada � fun��o deve ser alterado para bin�rio.
*/

#include <stdio.h>

void dec_para_bin(int*);

int main ()
{
	int num;
	printf("Digite um numero positivo para decimal: ");
	scanf("%d", &num);
	dec_para_bin(&num);
	printf("O valor em binario: %d", num);
	return 0;
}

void dec_para_bin(int *pnum)
{
	int dec = *pnum, pot10 = 1, resto;
	*pnum = 0;
	while (dec>0){
		resto = dec % 2;
		*pnum += resto * pot10;
		dec /= 2;
		pot10 *= 10;
	}
}


/*
Convertendo decimal para bin�rio
    25 / 2
     1   12 / 2 
         0    6 / 2
              0   3 / 2
                  1   1
   <-------------------  
*/

