#include<stdio.h>


int senhaum, senhadois, c = 0;
float saldo = 500.0, dep, saque, maior;

int main (){
	
	
	printf("Crie uma senha de 4 digitos: \n");
	scanf("%d",&senhaum);
	
	printf("\nBem Vindo! \n");
	printf("Insira sua senha: \n");
	scanf("%d",&senhadois);
	
	if (senhaum == senhadois){
		printf("\nBem Vindo ao Banco TL! \n");
		printf("\n---------------------------\n");
		
		do {
			printf("\n\nSALDO: R$%.2f", saldo);
			printf("\n---------------------------\n");
			printf("MENU DE OPCOES\n");
			printf("\n [1] DEPOSITAR\n");
			printf("\n [2] SACAR\n");
			printf("\n [3] CONSULTAR SALDO E ESTATISTICAS\n");
			printf("\n [4] SAIR\n");
			
			scanf("%d",&c);
			
			if (c == 1){
				
				printf("DEPOSITAR\n");
				printf("VALOR DO DEPOSITO: ");
				scanf("%f", &dep);
				
				if (dep >= 0.01){
					printf(" DEPOSITO APROVADO!\n");
					saldo = saldo + dep;
					if (dep > maior){
						maior = dep;
					} 
				c = 0;
				} else {
					printf("VALOR INVÁLIDO");
					c = 0;
				}
				
				
				
			} else if (c == 2){
				
				printf("SACAR\n");
				printf("SENHA DE 4 DIGITOS: \n");
				scanf ("%d", &senhadois);
				
				if (senhadois == senhaum) {

    				printf("VALOR DO SAQUE: \n");
    				scanf("%f", &saque);

    				if (saque >= 0.01 && saque <= saldo) {

        				printf("SAQUE APROVADO!\n");
        				saldo = saldo - saque;

    				} else {
       				 printf("VALOR INVALIDO OU SALDO INSUFICIENTE\n");
    				}

				} else {
    				printf("SENHA INCORRETA!\n");
				}

				c = 0;
				
			} else if ( c == 3){
				
				printf("\nCONSULTAR SALDO E ESTATISTICAS\n");
				printf("SALDO: R$ %.2f\n", saldo);
				printf("\nMAIR DEPOSITO: %f", maior);
				c = 0;
				
			} else if (c == 4){
				printf ("MUITO OBRIGADO! TCHAU!");
				c = 1;
				
			} else {
			
			printf("NUMERO INVALIDO");
			c = 0;
			}
			
			
			
		} while (c == 0);	
		
	}
	
	return 0;
}
