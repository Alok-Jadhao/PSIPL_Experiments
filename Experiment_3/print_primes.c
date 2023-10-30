#include<stdio.h>
#include<math.h>

void print_primes(int,int);


int main()
{

	int s,e;
	printf("Enter the start and end points: ");
	scanf("%d %d", &s, &e);
	print_primes(s,e);

	return 0;
}

void print_primes(int start,int end)
{
	int cnt=0;
	for(int i=start;i<=end;i++)
	{
		int j;
		if(i==1)
			printf("1 ");
		
		for(j=2;j<=sqrt(i);j++)
		
			if(i%j==0)
			{
				printf("%d ",i);
				break;
			}
		if(j>sqrt(i) && i!=1)
			printf("%d* ", i);
		cnt++;
		if(cnt==10)
		{
			printf("\n");
			cnt=0;
		}
	}	
	
}
