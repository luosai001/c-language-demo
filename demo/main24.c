#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *in,*out;
	char ch;
	char infile[10],outfile[10];
	printf("Enter the infile name\n");
	scanf("%s", infile);
	printf("Enter the outfile name\n");
	scanf("%s", outfile); 
	if ((in = fopen(infile, "r"))==NULL)
	{ printf("can not open infile %s\n", infile);
		exit(0);
	}
	if ((out = fopen(outfile, "w"))==NULL)
	{ printf("can not open outfile %s\n", outfile);
		exit(0);
	}
	while(!feof(in)) fputc(fgetc(in), out);
	fclose(in);
	fclose(out);
	return 0;
}
