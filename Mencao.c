#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char nome[7];
	float b1,b2,b3,b4,media;
	

	printf("\n Cauculo da media final e sua mencao, verifique se voce foi aprovado ou nao"); 
	printf("\n Digite o nome do aluno ");
	scanf("%s",&nome);
	printf("\n Digite a primeira nota ");
	scanf("%f",&b1);
	printf("\n Digite a segunda nota ");
	scanf("%f",&b2);
	printf("\n Digite a terceira nota ");
	scanf("%f",&b3);
	printf("\n Digite a quarta nota ");
	scanf("%f",&b4);
	media=(b1+b2+b3+b4)/4;
	printf("\n a media do aluno: %s \n", nome);
	printf("e: %f", media);
	
	if(media >= 9){
		printf("\n Sua mencao e A \n Aprovado \n");
		
	}
	
	else{	
	}
	
	if(media >= 7 && media <= 8.9){
		printf("\n Sua mencao e B \n Aprovado \n");
		
	}
	
	else{	
	}
	
	if(media >= 5 && media <= 6.9){
		printf("\n Sua mencao e C \n Aprovado \n");
		
	}
	
	else{	
	}
	
	if(media>=2.5 && media <= 4.9){
		printf("\n Sua mencao e D \n Reprovado \n");
		
	}
	
	else{	
	}
	
	if(media < 2.5){
		printf("\n Sua mencao e E \n Reprovado \n");
		
	}
	
	
	
	return 0;
}
