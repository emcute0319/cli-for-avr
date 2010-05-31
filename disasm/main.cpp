
#include "armdis.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	unsigned char *buffer;
	char dest[1024];
	FILE *fp;
	long flen;
    
	if (argc < 2)
	{
		printf("usage :  disarm <input_bin_file>\n");
        system("pause");
		exit(0);
	}

	fp = fopen( argv[1], "rb");
	if ( !fp )
	{
		printf("file open error!\n");
		exit(0);
	}
	fseek(fp, 0, SEEK_END);
	flen = ftell(fp);
	buffer = (unsigned  char *)malloc(flen);
	fseek(fp, 0, SEEK_SET);
	fread(buffer, flen, 1,fp);
	fclose(fp);
    fp = 0;

	setSource(buffer);
	for (int i = 0; i < flen; i+=4)
	{
		disArm(i , dest, DIS_VIEW_ADDRESS | DIS_VIEW_CODE);
        printf("%s\n", dest);
	}
	free(buffer);
}

