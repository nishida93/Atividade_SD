struct cadastro{

	char user[10];
	char mens[50];
	int op;
};

program ATIVIDADE {
	version ATIVIDADE_V1 {
		int cad_mens(cadastro) = 1;
		} = 1;
	} = 0x200000f;
