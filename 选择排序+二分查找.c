#include<stdio.h>

int max(int a[],int len)
{
	int i,maxid=0;
	for(i=1;i<len;i++)
	{
		if(a[i]>a[maxid])
		{
			maxid=i;
		}
	}
	return maxid;
}

int search(int x,int a[],int len)
{
	int left=0,right=len-1;
	int ret=-1;
	while(left<right)
	{
		int mid=(left+right)/2;
		if(a[mid]>x)
		{
			right=mid-1;
		}
		else if(a[mid]==x)
		{
			ret=mid;
			right=mid-1;
			break;
		}
		else
		{
			left=mid+1;
		}
	}
	return ret;
}

int main()
{
	int a[]={8,5,2,99,12,356,14,22,16,98};
	int len=sizeof(a)/sizeof(a[0]);
	int i;
	for(i=len-1;i>0;i--)
	{
		int maxid=max(a,i+1);
		int t=a[maxid];
		a[maxid]=a[i];
		a[i]=t;
	}
	for(i=0;i<len;i++)
	{
		printf("%d",a[i]);
		if(i<len-1)
		{
			printf(" ");
		}
	}
	printf("\n");
	int ret1=search(99,a,len),ret2=search(100,a,len);
	printf("%d %d",ret1,ret2);
	return 0;
}
