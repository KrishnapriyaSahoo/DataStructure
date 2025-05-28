#include<stdio.h>
void swap(int *arr,int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
void bubbleSort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			swap(arr,j,j+1);
		}
	}
}
void printArray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
}
int main()
{
	int arr[]={12,13,10,11,15,14};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,n);
	printf("Sorted Array is:\n");
	printArray(arr,n);
	return 0;
}
