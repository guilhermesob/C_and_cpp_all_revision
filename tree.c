int insere_filho_direita ( char chave, int pai ) {
	if ( arvore [ pai ] == NULL ) {
		printf ( “Erro: noh pai inexistente!” )
		return 0; //falha
	} else
		arvore [ ( pai * 2 ) + 2 ] = chave
	return 1; //sucesso
}
