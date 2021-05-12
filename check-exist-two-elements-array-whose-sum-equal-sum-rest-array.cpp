//check-exist-two-elements-array-whose-sum-equal-sum-rest-array
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={5,4,5,4,10,8};
	int total=36;
	int i,j,n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{	
			if(i!=j && 2*arr[i]+2*arr[j]-total==0)
			{
				cout<<arr[i]<<"  "<<arr[j]<<endl;
				break;
			}
		}	
	}
	return -1;
}
