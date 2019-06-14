#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main(int argc, char *argv[]) {
	
	float n1,n2;
	int op;
	
	printf("Digite o primeiro numero para realizar a operacao: \n");
	scanf("%f",&n1);
	printf("Digite o segundo numero: \n");
	scanf("%f",&n2);
	printf("Escolha a operacao desejada");
	printf("\n 1 Soma");
	printf("\n 2 Subtracao");
	printf("\n 3 Multiplicacao");
	printf("\n 4 Divisao \n");
	scanf("%d",&op);
	
	switch(op){
		case 1: printf("O resultado da operacao e %f",n1+n2);	
				break;
		case 2:  printf("O resultado da operacao e %f",n1-n2);
				break;
		case 3:  printf("O resultado da operacao e %f",n1*n2);
				break;
		case 4:  printf("O resultado da operacao e %f",n1/n2);
				break;
	default: 
		printf ("\n Escolha inexistente");
		break;
	
	}
	
	return 0;
}

