#include<stdio.h>
void main()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

	 for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n;j++)
		{
		if(i==j||i+j==2*n||j==2*n-1||j==1)
		printf("*");
		else
		printf(" ");
		}
		printf("\n");
	 }
}
