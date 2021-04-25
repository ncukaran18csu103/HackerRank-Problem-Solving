//Find a pair with maximum product in array of Integers
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	////creating 2 array and traverse them
	int arr[]={-9,2,6,7,5,-3,-8};
	int product=1;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i]*arr[j]>product)
			{
				if(i!=j)
					product=arr[i]*arr[j];
			}
		}
	}
	cout<< product;
	return -1;
}
