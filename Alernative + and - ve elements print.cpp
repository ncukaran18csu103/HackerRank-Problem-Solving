//earrange the array in alternating positive and negative items with O(1) extra space
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={-1,-2,5,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	int i=arr[0],j=arr[n-1];
	while(i<=j)
	{
		cout<<arr[i]<<endl<<arr[j]<<endl;
		i++;
		j--;
	}
	return 0;
}
