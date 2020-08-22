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
			if(n%2==1)
		{
			if(i==1||i==n||j==n/2+1)
			printf("*");
			else
			printf(" ");
		}
		else if(n%2==0)
		{
		if((i==1&&j!=n||(i==n&&j!=n)||j==n/2))
			printf("*");
			else
			printf(" ");	
		}
		}
		printf("\n");
	}
	getch();
}
