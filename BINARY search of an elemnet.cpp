//seraching of an element through Bianry search
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
int BinarySeacrh(int arr[],int 	i,int j,int num)
{
	if(i<=j)
	{
		int mid=(i+j)/2;
		if(arr[mid]==num)
			return mid;
		if (arr[mid]<num)
			return BinarySeacrh(arr,mid+1,j,num);
		if (arr[mid]>num)
			return BinarySeacrh(arr,i,mid-1,num);
	}
	return -1;
}
int main()
{
	int i,j,arr[]={1,2,3,4,5,6,7,8,9,10},mid=(i+j)/2;
	int num=5;
	int n = sizeof(arr)/ sizeof(arr[0]);
	if(index=-1) cout<<"not found";
	else	cout<<"found";
}
