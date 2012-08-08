#include <stdio.h>
#include <stdlib.h>


int main()
{
	unsigned int byte = 0x00;
	char str[1024];

	while(1)
	{
		if(scanf("%02x", &byte) == EOF)
			break;
		if(byte == 0xFF)
			break;

		gets(str);

		printf("%s\n", str + 26);
		if(byte == 0x35)
		{
			printf("sub eax, 2h\n");
		}
		else if(byte == 0x2d) 
		{
			printf("add eax, 1h\n");
		}
		else if(byte == 0x05)
		{
			printf("xor eax, 10101010h\n");
		}


	}

	


	return 0;
}

