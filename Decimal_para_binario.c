/* Exercícios Ponteiros
	
	2) Criar uma função em C que receba um número decimal e converta-o para binário. 
	Obs.: O parâmetro passado na chamada à função deve ser alterado para binário.
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
Convertendo decimal para binário
    25 / 2
     1   12 / 2 
         0    6 / 2
              0   3 / 2
                  1   1
   <-------------------  
*/

