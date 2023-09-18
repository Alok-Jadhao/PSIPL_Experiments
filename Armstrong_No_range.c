#include<stdio.h>
#include<math.h>

int main(){
	int num, sum=0,rem,num1,cnt=0,start,end;
	double sum1=0;
	printf("Enter the number range to be checked:");
	scanf("%d %d",&start, &end);
	for(int c=start;c<=end;c++){
		num = c;
		cnt = 0;

	
		while(num>0){
			num/=10;
			cnt++;
		}
		num=c;
		double sum1=0; 
		while(num!=0){
			rem=num%10;
			sum1+=pow((double)rem,(double)cnt);
			num/=10;
		}
		sum=sum1;
		if(sum==c)
			printf("%d\n",sum);
	

	}	
	
	return 0;
}