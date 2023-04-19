#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main(int argc, char** argv){
	int v[10]={1,2,3,4,4,2,3,4,6,9};
	int s[10];
	int j=0,n=0;
	for(int i=0;i<10;i++){
		for(j=0; j<n; j++){
			if(v[i] == s[j]){
				break;
			}
		}
		if(j==n){
			s[n++]=v[i];
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",s[i]);
	}

}
