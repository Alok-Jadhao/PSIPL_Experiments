#include<stdio.h>

int amicable(int,int);

int main()
{
	int n1,n2;
	printf("Enter the numbers to be checked: ");
	scanf("%d %d",&n1,&n2);
	int k=amicable(n1,n2);
	if(k==1)
		printf("Amicable\n");
		
	else
		printf("Not Amicable\n");
		
	
	return 0;
}

int amicable(int n1,int n2)
{
	int s1=0,s2=0;
	//factors of n1
	for(int i=1;i<n1;i++)
		if(n1%i==0)
			s1+=i;
	for(int i=1;i<n2;i++)
		if(n2%i==0)
			s2+=i;
	if(s1==n2 && s2==n1)
		return 1;
	else
		return 0;
}
