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
			
			if(n%2==0)
			{
				if(i==1)
			printf(" ");
		else if(j==n||j==1||i==n/2+1)
					printf("*");
			else
			printf(" ");
			}
			else if(n%2==1)
			{
				 if(j==n||j==1||i==n/2+1)
					printf("*");
			else
			printf(" ");
			}
		}
		printf("\n");
	 }
}
