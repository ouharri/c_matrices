#include <stdio.h>
#include <stdlib.h>

int main() 
{
	
	int n, i, j;
	printf("Please enter rows number: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) 
	{
		for (j=1; j <= 2*n-1; j++) 
		{	
			if(j >= n-(i-1) && j <= n+(i-1)) 
			{
			
				printf("*");
			}
		else 
			printf(" ");
								
		}
		printf("\n");
		
	}
	return 0;
	
}
