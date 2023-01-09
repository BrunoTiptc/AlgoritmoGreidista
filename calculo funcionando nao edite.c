#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main() {
		
		int qtdEstaca = 0;
		int qtdPontos = 0;
		int d,i = 0;

	printf("Bem vindo ao calculo de material\n");
	printf("Digite a quantidade de estacas que deseja armazena ?\n");
	fflush(stdin);
 	scanf("%d", &qtdEstaca);
 	printf("Escolha 2 se for verificar na est esq e dir. 3 ou mais se for correr linha e pegar mais pontos\n");
 	fflush(stdin);
 	scanf("%d", &qtdPontos);	
 	float cotas[qtdEstaca][qtdPontos];
 	float somatotal[qtdEstaca];
 	float result[i];
 	int l,c;
 	l = 0;
 	
 	
 	while(l < qtdEstaca){
 		printf("Estaca %d\n",(l+1));
 		c = 0;
 		while( c < qtdPontos){
 			printf("Digite a cota %d da estaca %d\n", (c+1),(l+1));
			fflush(stdin); 
 			scanf("%f", &cotas[l][c]);
 			c = c + 1;
		 }
 		l = l+ 1;	
	 }
	 float media,soma,total;
	 for (l = 0; l <qtdEstaca; l++){
	 	media = 0.0;
	 	total = 0.0;
	 	soma = 0.0;
	 	for(c = 0; c < qtdPontos; c++){
	 		total = total + cotas[l][c];
			}
			
			
			media = total / qtdPontos;
			soma = media + soma;
			somatotal[l] = soma;
			
			float soma1;	
			
			printf("\nA soma total da estaca %d é %f:\n",l+1, soma);
	 			
	 			
	 				result[i] += somatotal[l];
				 
				 	printf("\n A soma total da media das estaca e %f", result[i]);
	 			
	 	}
		
			 
		
	return 0;
}


