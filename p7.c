#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LINES 1000
#define MAX_CHAR_PER_LINE 1000

int read_file(char *filename, char text[][MAX_CHAR_PER_LINE]);
{
	/* Your code here */
}

void alphabetize(char **line_pntrs,int nlines)
{
	/* Your code here */
}

int main(int argc, char **argv){

	char **line_pntrs;
	char in[MAX_LINES][MAX_CHAR_PER_LINE];
	char *filename = argv[1];
	int i=0,j=0, n;
	char c;

	n = read_file(filename,in);

	/* Array of pointers to lines */
	line_pntrs = (char **) malloc(MAX_LINES*sizeof(char *));

	for( i = 0; i < MAX_LINES; i++ )
		line_pntrs[i] = in[i];

	printf("Sorted list:\n");

	alphabetize(line_pntrs,n);

	for(i=0;i<n;i++)
		printf("%s", line_pntrs[i]);

	return 0;
}

