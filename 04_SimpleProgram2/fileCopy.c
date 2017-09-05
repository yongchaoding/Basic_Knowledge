#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int *in,*out;
	int ch;

	if( 3 != argc)
	{
		fprintf( stderr, "Please input three parameters!\n");
		exit(EXIT_FAILURE);
	}
	if( in = fopen(argv[1], "rb")  == NULL)
	{	
		fprintf( stderr, "Can not open file: %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if( in = fopen(argv[2], "wb")  == NULL)
	{	
		fprintf( stderr, "Can not open file: %s\n", argv[2]);
		close(in);
		exit(EXIT_FAILURE);
	}

	while( (ch = getc(in)) != EOF)
	{
		if( putc(ch, out) == EOF)
		{
			break;
		}
	}

	if( ferror( in ))
	{
		printf("Read file %s failture!\n", argv[1]);
	}

	if( ferror( out ))
	{
		printf("Wirte file %s failture!\n", argv[2]);
	}

	printf("Success in copying 1 file!\n");

	close(in);
	return 0;
}
