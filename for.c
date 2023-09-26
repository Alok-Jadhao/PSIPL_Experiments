#include <stdio.h>

int main(){
	int fac, n, c;
	printf("Enter a number:");
	scanf("%d",&n);
	fac=n;
	if(n==0)
		printf("%d factorial is 1",n);
	for(c=n-1;c>1;c--){
		fac*=c;
	
	}
printf("%d factorial is %d",n,fac);
	return 0;
}
