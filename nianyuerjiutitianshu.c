#include<stdio.h>
int main()
{
	int x,y,z,b,c,i;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	printf("�����������գ�\n��-��-��\n");
	scanf("%d-%d-%d",&x,&y,&z);
	if(��year%4==0&&year%100!=0)||(year%400==0))
	  a[2]=29;
	if(y<1||y>12)
	  printf("�·ݴ���");
	if(z<1||z>a[y])
	  printf("���Ӵ���!"); 
	else
	{
		for(i=0;i<y;i++)
		{
			c=c+a[i];
		}
		c=c+z;
		printf("%d",c);
	}
	return 0;
}
