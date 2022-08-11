#include<stdio.h>
int isprime(int x,int prime[],int num)
{
	int ret=1;
	int i;
	for(i=0;i<num;i++)
	{
		if(x%prime[i]==0)
		{
			ret=0;
			break;
		}
	}
	return ret;
}
int main()
{
	int prime[100]={2};
	int count=1;
	int i=3;
	while(count<100)
	{
		if(isprime(i,prime,count)==1)
		{
			prime[count]=i;
			count++;
		}
		i++;
	}
	for(i=0;i<100;i++)
	{
		printf("%d\n",prime[i]);
	}
	return 0;
}
