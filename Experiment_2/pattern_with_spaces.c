#include <stdio.h>

int main()
{
	int n,r;
	
	printf("the number of rows: ");
	scanf("%d",&r);
	printf("the number of columns: ");
	scanf("%d",&n);
	
	for (int j=1;j<=r;j++){
		for (int s=1;s<=r-j;s++)
			printf(" ");
		for (int i=1;i<=j;i++)
			printf("*");
			
		printf("\n");
	}
	return 0;
}
