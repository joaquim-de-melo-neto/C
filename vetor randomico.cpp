void vetrand(int *v, int size)
{
	srand(time(NULL));
	for(int i=0; i<size; i++)
	{
		v[i] = rand()%100;
	}
	
}
