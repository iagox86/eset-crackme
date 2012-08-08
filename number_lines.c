#include <stdio.h>

int main()
{
	char str[1024];
	int i = 1;

	while(gets(str))
	{
		printf("%6d %s\n", i, str);
		i++;
	}

	return 0;
}

