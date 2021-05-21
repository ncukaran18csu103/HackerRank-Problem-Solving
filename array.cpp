#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int i1=0;i1<m;i1++)
        {
            cin>>arr[i][i1];
            if(i==i1){sum=sum+arr[i][i1];}
        }
    }
    int max_size=0;
    if(n>m)max_size=n;
    else max_size=m;
    int arr1[max_size][max_size];
    for(int i=0;i<max_size;i++)
    {
        for(int i1=0;i1<max_size;i1++)
        {
            arr1[i][i1]=1;
            
        }
    }
    int sum1=0;
    for(int i=0;i<n;i++)
    {
        for(int i1=0;i1<m;i1++)
        {
            arr1[i][i1]=arr[i][i1];
        }
    }
    for(int i=0;i<max_size;i++)
    {
        for(int i1=0;i1<max_size;i1++)
        {
            cout<<arr1[i][i1]<<" ";
            
            if(i==i1){sum1=sum1+arr1[i][i1];}
        }
        cout<<endl;
    }
    
    cout<<sum<<" "<<sum1;
}
