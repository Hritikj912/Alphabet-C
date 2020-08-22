#include<stdio.h>
void main()
{
	int i,j,n; 
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);

		 for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{	if(j==n&&(i==1||i==n/2+1||i==n))
				printf(" ");
			else if(i==1||i==n||(j==1&&i!=n)||(i==n/2+1&&(j!=1||j!=n))||(j==n&&(i!=1||i!=n/2+1||i!=n)))
			printf("*");
			else
			printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	 }
