#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||j==1||i==n||(i==n/2+1&&j<=n/2+2))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
