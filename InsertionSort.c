#include<stdio.h>
#include<math.h>
void insertionSort(int arr[],int n)
{
	int i,j,key;
	for(i=0;i<n;i++)
	{
		key=arr[i];//current element is considered as key element
		j=i-1;
	while(j>=0&&arr[j]>key)
	{
		arr[j+1]=arr[j];
		j=j-1;//decrease the index of j to compare upto first element
	}
	arr[j+1]=key;
}
}
void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[]={6,7,2,9,1,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr,n);
	printArray(arr,n);
	return 0;
}
