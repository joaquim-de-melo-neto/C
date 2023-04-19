
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define OP_OUT "-o"

int main(int argc, char** argv) {
	FILE *fin, *fout = stdout;
	int i;
	int ch;
	char opcao = 'M';

	// verificar se o ultimo padrao é do tipo -oArq
	if(strnicmp(argv[argc-1], OP_OUT, strlen(OP_OUT))== 0 ) {
		if((fout = fopen(argv[argc-1]+2,"wt"))==NULL) {
			fprintf(stderr,"Impossivel criar arquivo %s\n\n",argv[argc-1]);
			exit(1);
		} else argc--; // ultimo parametro tratado
	}
	for(i=1; i<argc; i++) {
		if(argv[i][0] == '-')
			switch(argv[i][1]) {
				case 'm':
				case 'M':
				case 'd':
				case 'D':
					opcao = argv[i][1];
			} else { // é um arquivo
			fprintf(fout,"%s\n",argv[i]);
			if((fin = fopen(argv[i],"r"))==NULL) continue;
			while((ch = fgetc(fin))!=EOF)
				switch(opcao) {
					case 'm':
						if (islower(ch)) fputc(ch,fout);
						break;
					case 'M':
						if (isupper(ch)) fputc(ch,fout);
						break;
					case 'd':
					case 'D':
						if (isdigit(ch)) fputc(ch,fout);
						break;
				}
			fclose(fin);
			fputc('\n',fout); // mudar de linha
		}
	}
	fclose(fout);
	exit(0);
}
