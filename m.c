#include<stdio.h>
void main()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

		 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{if(i==n&&(j==1||j==n))
		printf("*");
			else if ((i+j==n+1)&&(i<=n/2+1))
				printf("*");
				 else if ((i==j)&&(i<=n/2+1))
				printf("*");
				else if(j==1||j==n)
				printf("*");
			else
			printf(" ");
		}
		printf("\n");
	 }
}
