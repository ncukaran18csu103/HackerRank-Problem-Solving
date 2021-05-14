//string reverse
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
	// printing string and then reversing it through iterative approach
	char *s={"karan"};
	int n=3;
	for(int i=(strlen(s)-1);i>=0;i--)
	{
		cout<<s[i];
	}
	return 0;
}
