#include<iostream>
using namespace std;

void MoveToZeroEnd(int arr[],int n)
{

	int j =0;
	for(int i =0 ;i<n;i++)
	{
		if(arr[i]!=0)
		{
			arr[j]=arr[i];
			j++;
		}
	}
	
	for(int i=j; i<n;i++)
	{
		arr[i]=0;
	}
	
	for(int i =0 ; i< n ;i++)
 	{
 		cout<<arr[i]<<" ";
	 }
}



int main()
{
	int arr[]={5,0,-3,7,0,0,9,6,-47,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	 MoveToZeroEnd(arr,n);
//	printArray(arr,n);
}
