// ot check whelther a string is palidrone or not
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
	//to checck it in atring
	char *s={"nitin"};
	int m=strlen(s);
	for(int i=strlen(s)-1;i>=0;i--)
	{
		if(s[i]==s[4-i])
		{
			cout<<s[i];
		}
		else{
			cout<<"not a plaindrome";
		}
	}
		cout<<endl<<"palindorne";
	
	return 0;
}
