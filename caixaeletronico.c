#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float saldo,valor;
	int op;
	
	
	printf("\n Simulador de caixa eletronico \n");
	printf("\n O valor inicial de saldo em conta e 10.000,00R$ ");
	printf("\n Escolha a opcao desejada");
	printf("\n 1 Saque");
	printf("\n 2 deposito");
	printf("\n 3 empréstimo \n ");
	scanf("%d",&op);
	
	printf("Digite o valor "); 
	scanf("%f",&valor);
	
	saldo=10000;
	
	switch(op){
		case 1: printf("O saldo final de sua conta e: %f",saldo - valor);	
				break;
		case 2: printf("O saldo final de sua conta e: %f",saldo + valor);
				break;
		case 3: printf("O saldo final de sua conta e: %f",saldo + valor);
				break;
		
	default: 
		printf ("\n Escolha inexistente");
		break;
	}		
		
		return 0;
}
