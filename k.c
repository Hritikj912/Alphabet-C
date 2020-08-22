#include<stdio.h>
void main()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

		 for(i==0;i<=n/2;i++)
	{
		for(j=1;j<=n/2;j++)
		{
				if(j==1)
				printf("*");
				else if(i+j==n/2+1)
				printf(" *");
				else
				printf(" ");
			
		}
		printf("\n");
	 }
	 for(i=n/2+1;i>=1;i--)
	{
		for(j=0;j<=n/2;j++)
		{
			if(j==0)
			printf("*");
			else if(i+j==n/2+1)
			printf("*");
			else
			printf(" ");
			}
			printf("\n");}
}
