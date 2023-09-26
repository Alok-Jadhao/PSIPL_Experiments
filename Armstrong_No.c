#include<stdio.h>
#include<math.h>

int main(){
	int num, sum=0,rem,num1,cnt=0;
	double sum1=0;
	printf("Enter the number:");
	scanf("%d",&num);
	num1=num;
	while(num>0){
		num/=10;
		cnt++;
	}
	num=num1;
	while(num!=0){
		rem=num%10;
		sum1+=pow((double)rem,(double)cnt);
		num/=10;
	}
	sum=sum1;
	if(sum==num1)
		printf("%d is armstrong",sum);
	else 
		printf("%d is not armstrong",num1);	
	
	return 0;
}