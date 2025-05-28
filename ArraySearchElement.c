#include<stdio.h>
int searchElement(int arr[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
	if(arr[i]==key)
	return i;
	else
	return -1;
}
}
int main()
{
	int arr[]={10,20,30,40,50};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=40;
	int position=searchElement(arr,n,key);
	if(position==-1)
	printf("Element not found");
	else
	printf("Element found at %d",position);
	return 0;
}
