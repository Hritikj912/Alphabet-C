
				
				  
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
             if(j==1||j==n||i==j)
				printf("*");
			else
			printf(" ");
		}
		printf("\n");
	 }
}
