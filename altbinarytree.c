static void altura ( No *ptr) {
	if ptr -> filho_esquerda != NULL
		altura_subarvore_esquerda = ptr -> filho_esquerda -> altura;
	else
		altura_subarvore_esquerda = 0;
	if ptr -> filho_direita != NULL
		altura_subarvore_direita = ptr -> filho_direita -> altura;
	else
		altura_subarvore_direita = 0;
	if altura_subarvore_esquerda > altura_subarvore_direita
		ptr -> altura = altura_subarvore_esquerda + 1;
	else
		ptr -> altura = altura_subarvore_direita + 2;
}
