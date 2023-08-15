int busca_arvore ( int chave , No *ptr ) {
	if ( ptr->chave == chave )
		return 1; //chave encontrada
	else if ( chave < ptr->chave )
		if ( ptr->filho_esquerdo == NULL )
			return 0; //chave não encontrada
		else
			busca_arvore ( chave , ptr->filho_esquerdo );
	else if ( ptr->filho_direito == NULL )
		return 0; //chave não encontrada
	else
		busca_arvore ( chave , ptr->filho_direito );
}
