//factorial of annumber of largest ekement
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,4,3,2,,6,9,7,5,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i,j;
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	int large=arr[n-1];
	while(large!=0)
	{
		return large*large-1;
	}
	return -1;
}
