#include<stdio.h>
int minimum(int x,int y)
{
	return (x<=y?x:y);
}
int fibonacciSearch(int arr[],int x,int n)
{
	int fibMMm2=0;
	int fibMMm1=1;
	int fibMMm=fibMMm2+fibMMm1;
	while(fibMMm<n)
	{
		fibMMm2=fibMMm1;
		fibMMm1=fibMMm;
		fibMMm=fibMMm2+fibMMm1;
	}
	int offset=-1;
	while(fibMMm>1)
	{
		int i=minimum(offset+fibMMm2,n-1);
		if(arr[i]<x)
		{
			fibMMm=fibMMm1;
			fibMMm1=fibMMm2;//k=k-1
			fibMMm2=fibMMm-fibMMm1;//putting the previous values
			offset=i;
		}
		else if(arr[i]>x)
		{
			fibMMm=fibMMm2;
			fibMMm1=fibMMm1-fibMMm2;//fibMMm2,fibMMm1,fibMMm
			fibMMm2=fibMMm-fibMMm1;//fibMMm=fibMMm2+fibMMm1    current-previous
		}
		else
		{
			return i;
		}
	}
	if(fibMMm1&&arr[offset+1]==x)
	return offset+1;
return -1;
}
int main()
{
	int arr[]={10,21,35,40,45,50,80,82,85,90,100,235};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=80;
	int index=fibonacciSearch(arr,x,n);
	if(index>=0)
	printf("Element found at %d",index);
	else
	printf("Elememt not found");
	return 0;
}
