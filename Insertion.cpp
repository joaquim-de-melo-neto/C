#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void vetshow(int *v, int size)
{
	for(int i=0;i<size;i++)
	{
	printf("%3d ",v[i]);
	}
	printf("\n");
}

int insertion(int v[], int index, int x, int size){
	for(int i=size-1;i>=index;i--){
		v[i+1] = v[i];
	}
	v[index] = x;
	
	return ++size;
}


int main(int argc, char** argv){
	int v[] = {1,2,4,5};
	int n = 4;
	int *ptr = NULL;
	
	vetshow(v,n);
	
	n = insertion(v,4,3,n);
	
	vetshow(v,n);
	
	
	

}
