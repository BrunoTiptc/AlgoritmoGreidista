#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define porcento1 100


int main(void) {
	        setlocale(LC_ALL, "Portuguese");
	        int menu, medida, i;
	        float cota, afastamento, corte, aterro, medida1, aterrou, subir;
	    	printf ( "Escolha uma opção:\n 1 - Afastamento de estaca \n 2 - Calcular medidas(corte e aterro) \n 3 - Calcular volume de terra \n 4 - Sair ou Encerrar \n");
            scanf("%d", &menu);
            int qtdEstaca = 0;
			int qtdPontos = 0;
			int d,j = 0;
        do{
	   		switch (menu)
	      	{
			  case 1:
			  printf(" \n\nFazer afastamento de estaca no aterro \n \n Digite a cota da estaca: \n \n ");
 			          scanf("%f", &cota);
 			          fflush(stdin);
 			          	printf("\n Agora digite o quanto subiu de aterro \n \n ");
 			          	scanf("%f", &aterrou);
 			          		fflush(stdin);
 			          		 afastamento = aterrou * 1.5;
 			          		 subir = cota - aterrou;
			                	printf(" \n Voce tem que afastar : %f",afastamento);
			                	printf("  Metros   \n");
			                	printf("\n\nAinda falta subir :%f", subir); 
	      		break;
	      	case 2:
			   printf("\nCalcular medidade de corte e de aterro \n Digite 1 para corte ou 2 para aterro \n\n");
			        scanf("%d", &medida);
			        	if  (medida == 1)
			        	   	{
								printf("Digite o corte \n");
			        				scanf("%f", &corte);
									fflush(stdin); 
									   	printf("Digite qual foi a medida \n");   
											scanf("%f", &medida1); 
											fflush(stdin); 
													cota = corte - medida1;
												     printf("Você tem que corta : %f\n", cota);
							}
						else 
							{
								printf("Digite o aterro \n");
									scanf("%f", &aterro);
									fflush(stdin);
										printf("Digite qual foi a medida \n");
											scanf("%f", &medida1);
											fflush(stdin);
												cota = aterro - medida1;
												 printf("Voce tem que aterra : %f", cota);			
							}	    
	      		break;
	      	case 3:
	      		{
				  
			  printf("\nCalcular volume de terra ");
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
			soma = soma + total / qtdPontos;
			soma = media + soma;
			somatotal[l] = soma;				
			printf("\nA soma total da estaca %d é %f:\n",l+1, soma);	
	 				result[j] += somatotal[l];
				 	printf("\n A soma total da media das estaca e %f\n", result[j]);
				 }
				 			fflush(stdin); 
							float porcento2 =0;
							float porcento =0;
							float lpista =0;
							float distancia =0;	
							float area_da_estaca =0;	
							float volume = 0;
							float capacidade =0;	
							float qtdCaminhoes =0;
							float volume2=0;		 
					 			printf("\nDigite a porcentagem de empolamento\n");
								scanf("%f", &porcento);
									porcento2 = porcento / porcento1;	
									printf("\nO empolamento é de: %f\n", porcento2 );	
									fflush(stdin); 
									printf("\n Agora digite a largura da pista em metros \n");
									scanf("%f", &lpista);
									fflush(stdin); 
										printf("\nA largura da pista é: %f metros\n", lpista);
										printf("\nAgora digite a distancia entre as estacas em metros\n");
										scanf("%f", &distancia);
										printf("\nA distancia entre as estacas é de: %f metros\n", distancia);
										fflush(stdin);
											area_da_estaca = lpista * distancia;
											printf("\nA area da estaca é de: %f m²\n", area_da_estaca);
											{	
											volume = area_da_estaca * porcento2;
											printf("\nO volume é sem acrescentar a expressura media é de: %f m³\n ", volume);
												volume2 = volume * result[j];
												printf("O volume total é de : %f  m³", volume2 );
												printf("\nAgora digite a capacidade dos caminhões em m³");
												scanf("%f", &capacidade);
												fflush(stdin);
												printf("\nA capacidade dos caminhoes é de :%f m³ \n", capacidade);
												qtdCaminhoes = volume2 / capacidade;
													printf("\nA quantidade de caminhoes necessarias para essa obra é de:%f caminhoe's\n\n", qtdCaminhoes);
											}
		 }
	      		break; 
	      		printf("\nFIM");	
			  	printf("Você digitou um valor inválido, tente novamente");     		
	}
	}while (menu != 4);
	return 0;
}

