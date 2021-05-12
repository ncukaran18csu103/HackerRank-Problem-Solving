//Find the nearest smaller numbers on left side in an array
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//
	int arr[]={1, 3, 0, 2, 5};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[i-1])		
			cout<<arr[i-1];
		else
			cout<<"_";
	}
	return -1;
}
