#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	
	int idade;
	
	printf("Saiba, a partir da idade, qual categoria como nadador e atribuida  \n");
	printf("Digite a idade para atribuir uma categoria como nadador : \n");
	scanf("%d", &idade);
	
	
	
	if (idade >= 5) {
		if (idade >= 5 && idade <= 7)
			printf("Infantil A");
		
		else 
			if (idade >= 8 && idade <= 10)	
				printf("Infantil b");
			else 
				if (idade >= 11 && idade <= 15)	
					printf("Juvenil A");
				
				else 
					if (idade >= 14 && idade <= 17)
						printf("Juvenil B");
					
					else 
						if (idade >= 18)
							printf("Senior");			
	
	
	}
	else 
	printf ("\n O valor inserido nao se enquadra em nenhuma categoria \n");
	printf("\n ok \n");
	system(" PAUSE");
	return 0;

		
	
}
