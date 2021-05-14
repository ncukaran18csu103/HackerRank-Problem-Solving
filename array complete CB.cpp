/*
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]*arr[i]<<" , ";
	}
	cout<<endl;
	//reverse order priting of n araryy
	for(int i=10;i>0;i--)
	{
		cout<<arr[i]<<" ,";
	}
	return 0;
}


*/
//linear search pair
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10],key=2,count=0;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<10;i++)
	{
				
		if(arr[i]==key)
		{
			cout<<endl<<"valid  index"<<i<<" key  "<<arr[i];
			count++;
			break; 
		}
	}
	if(count==0)//we can also check if the loop compltwes rhen aelmnts s no tfouf  if(i==key)
	{
		cout<<"not in array";
	}
}
*/
/*
//printing out all the subarrys in the aray 
//using O n^3
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<=n;i++)
	{
		for(int i1=i;i1<=n;i1++)
		{
			for(int i2=i;i2<i1;i2++)
			{
				cout<<arr[i2];
			}
			cout<<endl;
		}

	}
	return 0;
}

*/

/*
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	//maximum subarray sum we have to print
	int arr[]={1,-10,9,-3,5,7};
	int sum=0,max=-1,left,right;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<=n;i++)
	{
		for(int i1=i;i1<=n;i1++)
		{
			sum=0;
			for(int i2=i;i2<i1;i2++)
			{
				left=i,right=i1;
				sum=sum+arr[i2];
				if(max<sum)
				{
					max=sum;
					left=i,right=i1;
				}
			}
			
		}

	}
	cout<<max<<endl;
	for(int i2=left;i2<=right;i2++)
	{
		cout<<arr[i2];
	}
}
*/
//we have do cummultaive sum o fhe arrays 
//kadadnce allgorithm we will make the 0(N)

//getting the smallest number from the integer
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int arr[]={4,9,4,5};
	if(arr[0]>0)
	{
		cout<<arr[0];
	}
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=1;i<n;i++)
	{
		if(arr[i]>4 && arr[i]<10)
		{
			cout<<9-arr[i];
		}
		else{
			cout<<arr[i];
		}
	}
	return 0;
}
*/
/*
#include<iostream>
#include<string.h>
#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
	char arr[10]={"karan"}; //auhomtaclly it has null character in it
	cout<<arr;
	
	char arr1[10]={'k','a','r','a','n'}; //after prinitng it mayormaynot has null character
	cout<<arr1;
	
	char arr2[10];
	cin>>arr2;
	cout<<arr2<<endl;
	
	char par[100];
	cin.getline(par,100,'.');
	cout<<par;
	
	string s("hello world");
	cout<<s;
	string s1="hello world";
	cout<<s1;
	string s2;
	getline(cin,s2);
	cout<<s2;
	cout<<s1.length();
	
	string ar[10] ={"apple","APPLE","pineaple","mango","nike"};
	sort(ar,ar+5);
	int n=sizeof(ar)/sizeof(ar[0]);
	for(int i=0;i<=5;i++)
	{
		cout<<endl<<ar[i]<<",";
	}
	return 0;
}*/

#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
	int arr[4][4]={{1,4,8,10},{2,5,9,15},{6,16,18,20},{10,17,19,23}};	
	int key=17;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(arr[i][j]==key)
			{
				cout<<"element is found  i ="<<i<<"j thb element"<<j;
				cout<<endl<<"("<<i<<","<<j<<")";
			}
		}
	}
	return 0;
}
