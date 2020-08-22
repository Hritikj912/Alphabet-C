
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
			
		if((j==n||j==n-1)&&(i==1||i==n))
				  printf(" ");
				  else if((j==n-1&&(i==n-1||i==2)))
				  printf("*");
				  else if((j==n&&(i==n-1||i==2)))
				  printf(" ");
				  else if(j==1||i==1||i==n||j==n)
					printf("*");
		    	else
		    	printf(" ");
		}
		printf("\n");
	 }
}
