#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
void vetrand(int *v, int size)
{
	srand(time(NULL));
	for(int i=0; i<size; i++)
	{
		v[i] = rand()%100;
	}
	
}


void vetshow(int *v, int size)
{
	for(int i=0;i<size;i++)
	{
	printf("%3d ",v[i]);
	}
}


void merge(int *v, int l, int m, int r){
	int i = l;
	int j = m+1;
	int k = l;
	
	int temp[21];
	
	while(i <= m && j <= r){
		if(v[i] <= v[j]){
			temp[k] = v[i];
			i++;
			k++;
		}
		else{
			temp[k] = v[j];
			j++;
			k++;
		}
	}
	while(i <= m){
		temp[k] = v[i];
		i++;
		k++;
	}
	while(j <= r){
		temp[k] = v[j];
		j++;
		k++;
	}
	for(int p = l; p <= r; p++){
		v[p] = temp[p];
	}	
}

void mergesort(int *v, int l, int r){
	
	
	if(l<r){
		int m = (l+r)/2;
	
	mergesort(v,l,m);
	mergesort(v,m+1,r);
	
	merge(v,l,m,r);
	}
}



int main(int argc, char** argv){
	
	int vetor[21];
	
	vetrand(vetor,21);
	vetshow(vetor,21);
	
	mergesort(vetor,0,21-1);
	
	printf("\n");
	vetshow(vetor,21);
	

}
