#include<stdio.h>
void printArray(int* arr,int n)
{
	int i;
	printf("Array:\n");
	for(i=0;i<n;i++)
	{
		
		printf("%d",arr[i]);
		printf("\n");
	}
	
}
int main()
{
	int arr[]={1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	printArray(arr,n);
	return 0;
}
