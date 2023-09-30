/* A matriz A representa as interligações entre cidades
* 0,1,..,n-1: há uma estrada (de mão única) de x a y
se
* e somente se A[x] [y] == 1. A função devolve um
vetor d
* tal que d[x] é a disância da cidade o à cidade x. */
int *Distâncias (int **A, int n, int o) {
	int *d, x, y;
	int *f, s, t;
	d = malloc (n * sizeof (int)); 
	for (x = 0; x < n; x++) d[x] = -1;
	d[o] = 0;
	f = malloc (n * sizeof (int));
	s = 0; t = 1; f[s] = o;
	while (s < t) {
		/* f[s..t-1] é uma fila de cidades */
		x = f[s++];
		for (y = 0; y < n; y++)
			if (A[x][y] == 1 && d[y] == -1) {
				d[y] = d[x] +1;
				f[t++] = y;
			}
	}
	free (f);
	return d;
}
