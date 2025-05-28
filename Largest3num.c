#include<stdio.h>
#include<limits.h>
void print3largest(int arr[],int arr_size)
{
	int i,first,second,third;
	if(arr_size<3)
	{
		printf("Invalid input!!!");
		return;
	}
	third=second=first=INT_MIN;
	for(i=0;i<arr_size;i++)
	{
		if(arr[i]>first)
		{
			third=second;
			second=first;
			first=arr[i];
		}
		else if(arr[i]>second)
		{
			third=second;
			second=arr[i];
		}
		else if(arr[i]>third)
		{
			third=arr[i];
		}
	}
			printf("Three largest elements are %d, %d and %d",first,second,third);
}
int main()
{
	int arr[]={1,0,0,2,0,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	print3largest(arr,n);
	return 0;
}
