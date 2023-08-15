int insere_filho_direita ( No novo_no, No *pai ) {
	if ( pai == NULL ) {
		printf ( “Erro: noh pai inexistente!” )
		return 0; //falha
	} else
		pai -> filho_dir = novo_no;
	return 1; //sucesso
}
