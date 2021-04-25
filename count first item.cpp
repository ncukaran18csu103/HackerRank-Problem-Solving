#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr,int i, int j ,int n)
{
	if(i<=j)
	{	
		int mid=(i+j)/2;
		//if(arr[mid]==i) 
		//{count++;}
		if (arr[mid] > i ) 
		{j=arr[mid-1];
			count++;}
		if(arr[mid]<i)
		{	j=arr[mid-1];
			count++;}
	}
	return count;  
}
int main()
{
	int arr[]={1,1,2,3,3,4,5,6,7,8,8,8};
	int i,j;
	int n=sizeof(arr)/sizeof(arr[0]);
	int BinarySearch(arr,0,n-1,n);
}
