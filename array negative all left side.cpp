//to print all the neagative to one side
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={-1,8,9,-3};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<< " ";
	}
	return -1;
}
