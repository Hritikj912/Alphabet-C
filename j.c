
				
				  
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
if(j==1&&i==n)
				printf(" ");
				else if(j==n/2+1&&i==n)
				printf(" ");
				else if(i==1||j==n/2+1)
				printf("*");
				else if(i==n&&j<=n/2+1)
				printf("*");
				else if(j==1&&i>n/2+1)
				printf("*");
				else
				printf(" ");
		}
		printf("\n");
	 }
}
