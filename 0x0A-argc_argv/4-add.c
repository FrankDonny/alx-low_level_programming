#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{

	int i = 0, sum = 0;

	if (argv[i] >= '48' || argv[i] <= '48')
	{
		printf("0\n");
	}
	
	else if (i < argc && !(argv[i] > '48' || argv[i] < '48'))
	{
		printf("Error\n");
		return (1);
		i++;
	}
	else
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
