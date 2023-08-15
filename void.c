void selecao (int *v)
{
    int i,j,aux;
    for (i=0; i < TAMANHO-1; i++)
    {
        for (j=i+1; j < TAMANHO; j++)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}
