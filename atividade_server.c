/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "atividade.h"


int x=0;
	
cadastro cad[5];

int qtd_mensagem = 0;
int apagadas = 0;


int *
cad_mens_1_svc(cadastro *argp, struct svc_req *rqstp)
{
	static int  result;

	if(argp->op == 1){ //Cadastrar Mensagens

	/* Esse for serve para verificar se a posicao esta livre ou nao para cadastrar a msg */
	for(x=0; x<5; x++){

	/* Se for diferente de 0, significa que pode cadastrar na posicao */

	  if(cad[x].p_livre_ocupado != -500){

		strcpy(cad[x].user,argp->user);
		strcpy(cad[x].mens,argp->mens);
			
		
		/* Atribui 0 a posicao pois ela esta ocupada agora */
		cad[x].p_livre_ocupado = -500;
		break;
		
	   }	
	}//fecha o for


		if(qtd_mensagem<5){	
		    
			qtd_mensagem++;
		 	printf("Mensagem Cadastrada com sucesso!\n");	
			result = 0; // 0 Representa o sucesso do cadastro da mensagem
			
		
		}
			else{

				printf("Há 5 mensagens cadastradas! Nao eh possivel cadastrar mais.\n");
				result = -1; // -1 Representa a falha do cadastro da mensagem
		  	}	


	}//fecha o op

		
	   
		if(argp->op == 2){ //Ler Mensagens Cadastradas


			for(x=0; x<5; x++){

	
				if(cad[x].p_livre_ocupado==-500){
				
					printf("Usuario: %s\n", cad[x].user);
					printf("Mensagem: %s\n", cad[x].mens);
				}
			}
	
		}
			


				if(argp->op == 3){ //Apagar Mensagens 

					
					for(x=0; x<5; x++){
						if(strcmp(cad[x].user,argp->user)==0)
						{	
						
							cad[x].p_livre_ocupado = -2;
							apagadas++;
							qtd_mensagem--;
			
						}
		
					}	

				printf("Mensagens apagadas do servidor!\n");
					
				result = apagadas+100;

				/* Zera o apagadas para os outros usuarios */
		
				apagadas = 0;
	

				}

				if(argp->op == 4){ //Apagar Mensagens 
		
				printf("O Cliente encerrou a aplicação!\n");

				result = -4; // -4 Representa o encerramento da conexão pelo cliente
				
					
				}
		



	return &result;
}
