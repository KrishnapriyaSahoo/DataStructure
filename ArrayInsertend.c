#include<stdio.h>
int insertSorted(int arr[],int n,int key,int capacity)
{
	if(n>=capacity)
	return n;
	else
	arr[n]=key;
	return (n+1);
}
int main()
{
	int i,key=30;
	int n=6;
	int arr[20]={1,2,3,78,12,38};
	int capacity=sizeof(arr)/sizeof(arr[0]);
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
