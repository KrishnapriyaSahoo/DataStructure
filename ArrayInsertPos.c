#include<stdio.h>
void insertElement(int arr[],int n,int x,int pos)
{
	int i;
	for(i=n-1;i>=pos;i--)
	{
		arr[i+1]=arr[i];
		arr[pos]=x;
	}
}
int main()
{
	int i;
	int arr[20]={10,11,12,13,14};
	int n=5;
	printf("Before insertion:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	int x=20;
	int pos=3;
	insertElement(arr,n,x,pos);
	n++;
	printf("After insertion:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
		
	}
	
	return 0;
}
