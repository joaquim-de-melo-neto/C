void matrand(int m[][10], int linhas, int colunas)
{
	for(int l=0; l<linhas; l++)
	{
		for(int c=0; c<colunas; c++)
		{
			m[l][c] = rand()%100;
		}
	}
}
