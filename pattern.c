#include <stdio.h>

int main()
{
	int n,r;
	
	printf("the number of rows: ");
	scanf("%d",&r);
	printf("the number of columns: ");
	scanf("%d",&n);
	
	for (int j=0;j<r;j++){
		for (int i=0;i<n;i++){
			printf("*");
			}
		printf("\n");
	}
	return 0;
}
