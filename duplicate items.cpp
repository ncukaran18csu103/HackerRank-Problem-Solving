//printing the duplicates items in the string
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
	char *s={"geekss for a"};
	for(int i=0;i<=strlen(s)-1;i++)
	{
		for(int j=i+1;j<=strlen(s)-1;j++)
		{
			if(s[i]==s[j])
			{
				cout<<s[i];
			}
		}
		
	}
	return 0;
}

