void matshow(int m[][10], int linhas, int colunas)
{
	for(int i=0;i<linhas;i++)
	{
		for(int j=0; j<colunas; j++)
		{
		printf("%3d  ",m[i][j]);
		}
	printf("\n");	
	}
}
