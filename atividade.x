struct cadastro{

	char user[10];
	char mens[50];
	int op;
	int p_livre_ocupado;
	int msg_apagada;
	int qtd_mensagem;
	
};

program ATIVIDADE {
	version ATIVIDADE_V1  {
		int cad_mens(cadastro) = 1;
		} = 1;
	} = 0x200000f;
