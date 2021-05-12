//finding first repeating element in the integer.
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,4,5,6,9,8,7,3,4};
	int i;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
			if(arr[i]==arr[j])
				cout<<"elemnt index"<<i<<"  element"<<arr[i]<<"at j"<<j<<"  element"<<arr[j];
				
	}
return -1;
}
