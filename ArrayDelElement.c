#include<stdio.h>
int deleteElement(int arr[],int n,int key)
{
	int pos=findElement(arr,n,key);
	if(pos==-1)
	{
		printf("Element not found");
		return n;
	}
	else
	{
		int i;
		for(i=pos;i<n-1;i++)
		{
			arr[i]=arr[i+1];
			return n-1;
		}
	}
}
int findElement(int arr[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		 return i;
	return -1;
	}
}
int main()
{
	int i;
	int arr[]={10,20,30,40,50};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=30;
	printf("Array before deletion:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("Array after deletion:\n");
	n=deleteElement(arr,n,key);
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
