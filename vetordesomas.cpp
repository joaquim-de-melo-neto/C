#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    float v1[20], v2[20]; 
	float vcalc[20]; 
	char vop[20];

void Iniciar(){
    for(int i=0; i<20; i++){
    	
        v1[i] = rand();
        v2[i] = rand();
        if(i<5) vop[i] = '+';
        else if(i<10) vop[i] = '-';
        else if(i<15) vop[i] = '*';
        else if(i<20) vop[i] = '/';
    }
}

    
    
int main() {
	
	printf("%d",RAND_MAX);
    Iniciar();
    int i=0;
    for(i=0; i < 20; i++){
    	switch(vop[i]){
    	case '+': 
			vcalc[i] = v1[i] + v2[i];
    		break;
    	case '-':
			vcalc[i] = v1[i] - v2[i];
			break;
		case '*':
			vcalc[i] = v1[i] * v2[i];
			break;
		case '/':
			vcalc[i] = v1[i] / v2[i];
		}
		printf("%2d - %.2f %c %.2f = %.2f\n",i, v1[i], vop[i], v2[i], vcalc[i]); 
	}
}