#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	// nth largestv element
	int arr[]={1,2,36,8,4,6,9,8},nsmall,nlarge;
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	//3 largest and 3 smaleest element
	i=2; // for 3 rd lrgest we have to go +2
	arr[0+i];
	arr[n-1-i];
	return 0;
}
