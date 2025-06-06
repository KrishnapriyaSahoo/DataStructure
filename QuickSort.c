#include<stdio.h>
void swap(int* p1,int* p2)
{
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
}
int partition(int arr[],int low,int high)
{ 
	int j;
	int pivot=arr[high];
	int i=low-1;
	for(j=low;j<high;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return (i+1);
}
void quickSort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(arr,low,high);
		quickSort(arr,low,pi-1);
	quickSort(arr,pi+1,high);
	}	
}
int main()
{
	int i;
	int arr[]={12,11,13,15,17,16,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,n-1);
	printf("Sorted array\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
