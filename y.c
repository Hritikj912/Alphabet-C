#include<stdio.h>
void main()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

	 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		if((i==j&&i<=n/2)||(i+j==n&&i<=n/2)||(j==n/2&&i>=n/2))
		printf("*");
		else
		printf(" ");
		}
		printf("\n");
	 }
}
