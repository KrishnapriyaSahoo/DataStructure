#include<stdio.h>
int insertSorted(int arr[],int n,int key,int capacity)
{
	if(n>=capacity)
	return n;
	else
	{
		int i;
		for(i=n-1;i>=0&&arr[i]>key;i--)
		{
			arr[i+1]=arr[i];
			arr[i]=key;
		}
	}
	return n+1;
}
int main()
{
	int arr[20]={10,20,40,50};
	int capacity=sizeof(arr)/sizeof(arr[0]);
	int n=4;
	int i,key=30;
	printf("Before insertion:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	n=insertSorted(arr,n,key,capacity);
	printf("After insertion:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
