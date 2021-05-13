//gfg find the missing number
#inlcude<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	//missing number
	int arr[]={1,2,3,4,6,7,8,9};
	int total=(n+1)*(n+2)/2;
	for(int i=0;i<sizeof(arr);i++)
	{
		total=total-arr[i];
	}
	return total;
}
