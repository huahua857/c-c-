#include<stdio.h>
void main()
{
	int a, i, b;
	a = 0;
	for (i = 2; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			printf("%5d", i);
			a++;
		}
		if (a % 10 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}