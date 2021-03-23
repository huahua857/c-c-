#include<stdio.h>
void main()
{
	char a;
	a=getchar();
	if(a>='a'&&a<='z')
	{
		putchar(a-32);
	}
	if(a>='A'&&a<='Z')
	{
		putchar(a+32);
	}
	else
	{
		printf("ÇëÊäÈëÒ»¸ö×ÖÄ¸");
	}
}
