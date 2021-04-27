#include <stdio.h>
#include "types.h"

void reading_from_file(FILE* fp, symbol* simbols, int* kolvo, int* kk, int* k)
{
    if ((fp = fopen(argv[1], "r+")) == NULL)
    {
    	printf("Error\n");
    	return 0;
    }
    
    i = 0;
    while ((simbols[i] = fgetc(fp)) != EOF)
    {
    	
    }
}

void writing_to_file(FILE* fp2 , FILE* fp3, symbol* simbols, int* kolvo, int* kk, int* k, int *fsize2)
{
    // :)
}

