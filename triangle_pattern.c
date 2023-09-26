#include <stdio.h>

int main()
{
	int n,r;
	
	printf("the number of rows: ");
	scanf("%d",&r);

	
//For loop for rows	
	for (int j=1;j<=r;j++){
		//for loop for spaces
		for (int s=1;s<=r-j;s++)
			printf(" ");
		int i;
		//for loop for the half triangle of numbers
		for (i=1;i<=j;i++)//left triangle
			printf("%d",i);
		int l=i-2;
		//loop for another decreasing half
		for (int k=1;k<=j-1;k++)//right triangle
		{
			printf("%d",l);
			l--;
		}	
		printf("\n");
	}
	return 0;
} 
