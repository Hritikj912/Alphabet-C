#include<stdio.h>
void main()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

	 for(i=1;i<=n;i++)
	{
		for(j=1;j<=4*n;j++)
		{
		if(i==j||i+j==2*n||i+2*n-2==j||i+j==4*n-2)
		printf("*");
		else
		printf(" ");
		}
		printf("\n");
	 }
}
