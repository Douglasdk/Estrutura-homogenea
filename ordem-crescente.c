#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1,n2,n3;
	printf ("Apresente numeros diferentes e sera mostrada a ordem crescente entre eles\n");
	printf("Digite o primeiro numero \n");
	scanf("%d",&n1);
	printf("Digite o segundo numero: \n");
	scanf("%d",&n2);
	printf("Digite o terceiro numero \n");
	scanf("%d",&n3);
	
	if(n1>n2 && n2>n3){
		printf("a ordem crescente dos numeros e: %d %d %d", n3,n2,n1);
	
	}
	
	else{
	}
		if (n1>n3 && n3>n2){
			printf("a ordem crescente dos numeros e: %d %d %d",n2,n3,n1);
		}
	
	

	else{
	}
		if (n3>n2 && n2>n1){
			printf("a ordem crescente dos numeros e: %d %d %d",n1,n2,n3);
		}
	

	
	else{
	}
		if (n3>n1 && n1>n2){
			printf("a ordem crescente dos numeros e: %d %d %d",n2,n1,n3);
		}
	
	
	
	else{
	}
		if (n2>n1 && n1>n3){
			printf("a ordem crescente dos numeros e: %d %d %d",n3,n1,n2);
		}
	

	
	else{
	}
		if (n2>n3 && n3>n1){
			printf("a ordem crescente dos numeros e: %d %d %d",n1,n3,n2);
		}
	else{
		printf("\n Não digite numeros iguais!!!");
	}

		
	
	return 0;
}
