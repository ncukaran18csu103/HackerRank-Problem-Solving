LONELY INTEGER

Given an array of integers, where all elements but one occur twice, find the unique element.

Example

The unique element is .

Function Description

Complete the lonelyinteger function in the editor below.

lonelyinteger has the following parameter(s):

int a[n]: an array of integers
Returns

int: the element that occurs only once
Input Format

The first line contains a single integer, , the number of integers in the array.
The second line contains  space-separated integers that describe the values in .

Constraints

It is guaranteed that  is an odd number and that there is one unique element.
, where .
Sample Input 0

1
1
Sample Output 0

1

#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a=arr[0];
    for(int i=1;i<n;i++)
    {
        a=a^arr[i];
    }
    cout<<a;
}
____________________________________________________________
Given two integers,  and , find the maximal value of  xor , written , where  and  satisfy the following condition:


For example, if  and , then



Our maximum value is .

Function Description

Complete the maximizingXor function in the editor below. It must return an integer representing the maximum value calculated.

maximizingXor has the following parameter(s):

l: an integer, the lower bound, inclusive
r: an integer, the upper bound, inclusive
Input Format

The first line contains the integer .
The second line contains the integer .

Constraints

3

Output Format

Return the maximal value of the xor operations for all permutations of the integers from  to , inclusive.

Sample Input 0

10
15
Sample Output 0

7
Explanation 0

Here  and . Testing all pairs:


#include<iostream>
using namespace std;
int main()
{
    int l,r;cin>>l>>r;
    int a=0;
    for(int i=l;i<=r;i++)
    {
        for(int i1=l;i1<=r;i1++)
        {
            if(i!=i1)
            {
                
                if(a<(i^i1))
                {
                    a=i^i1;
                }
            }
        }
    }
    cout<<a;
    return 0;
}
______________________________________________________
An array, , is defined as follows:

 for , where  is the symbol for XOR
You will be given a left and right index . You must determine the XOR sum of the segment of  as .

For example, . The segment from  to  sums to .

Print the answer to each question.

Function Description

Complete the xorSequence function in the editor below. It should return the integer value calculated.

xorSequence has the following parameter(s):

l: the lower index of the range to sum
r: the higher index of the range to sum
Input Format

The first line contains an integer , the number of questions.
Each of the next  lines contains two space-separated integers,  and , the inclusive left and right indexes of the segment to query.

Constraints



Output Format

On a new line for each test case, print the XOR-Sum of 's elements in the inclusive range between indices  and .

Sample Input 0

3
2 4
2 8
5 9
Sample Output 0

7
9
15

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll get2(ll x){
    ll y=x/4*4;
    ll R=0;
    for (ll i=y;i<=x;i++) R^=i;
    return R;
}

ll get(ll x){
    if (x==0) return 0;
    ll k=(x+1)/2;
    x%=2;
    if (!x){
        return get2(k)*2ll;
    } else {
        return ((get2(k-1)*2ll)^(k&1ll));
    }
}

void sol(){
    ll l,r;
    scanf("%lld%lld",&l,&r);
    printf("%lld\n",(get(r)^get(l-1)));
}

int main() {
    int test;
    scanf("%d",&test);
    while (test--) sol();
    return 0;
}

__________________________________________________
Given an integer , find each  such that:

where  denotes the bitwise XOR operator. Return the number of 's satisfying the criteria.

Example

There are four values that meet the criteria:

Return .

Function Description

Complete the sumXor function in the editor below.

sumXor has the following parameter(s):
- int n: an integer

Returns
- int: the number of values found

Input Format

A single integer, .

Constraints

Subtasks

 for  of the maximum score.
Output Format

Sample Input 0

5
Sample Output 0

2


#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;int count=0;
    for(int i=0;i<n;i++)
    {
        if((n^i)==(n+i)&& n!=i)
        {
            count++;
        }
    }
    cout<<count;
}

_______________________________________________
Given a long integer , count the number of values of  satisfying the following conditions:

where  and  are long integers and  is the bitwise XOR operator.

You are given  queries, and each query is in the form of a long integer denoting . For each query, print the total number of values of  satisfying the conditions above on a new line.

For example, you are given the value . Condition  requires that . The following tests are run:





We find that there are  values meeting the first condition:  and .

Function Description

Complete the theGreatXor function in the editor below. It should return an integer that represents the number of values satisfying the constraints.

theGreatXor has the following parameter(s):

x: an integer
Input Format

The first line contains an integer , the number of queries.
Each of the next  lines contains a long integer describing the value of  for a query.

Constraints

Subtasks

For  of the maximum score:

Output Format

For each query, print the number of values of  satisfying the given conditions on a new line.

Sample Input 0

2
2
10
Sample Output 0

1
5


#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int count=0;
    while(n!=0)
    {
        int n1;cin>>n1;
        count=0;
        for(int i=0;i<n1;i++)
        {
            if((i^n1)>=n1)
            {
                count++;
            }
        }
        cout<<count-1<<endl;
        n--;
    }
    
}

_____________________________________________________________

You will be given a list of 32 bit unsigned integers. Flip all the bits ( and ) and return the result as an unsigned integer.

Example

. We're working with 32 bits, so:



Return .

Function Description

Complete the flippingBits function in the editor below.

flippingBits has the following parameter(s):

int n: an integer
Returns

int: the unsigned decimal integer result
Input Format

The first line of the input contains , the number of queries.
Each of the next  lines contain an integer, , to process.

Constraints



Sample Input 0

3
2147483647
1
0
Sample Output 0

2147483648
4294967294
4294967295


#include<iostream>
using namespace std;
int main()
{
    long long n;cin>>n;
    for(long long i=0;i<n;i++)
    {
        long long a;cin>>a;
        cout<<(a^4294967295)<<endl;
    }
    return 0;
}

_______________________________________________________________
	You are given  non-negative integers, . We define the score for some permutation () of length  to be the maximum of  for .

Find the permutation with the minimum possible score and print its score.

Note:  is the exclusive-OR (XOR) operator.

Input Format

The first line contains single integer, , denoting the number of integers.
The second line contains  space-separated integers, , describing the respective integers.

Constraints

Output Format

Print a single integer denoting the minimum possible score.

Sample Input 0

4
1 2 3 4
Sample Output 0

5


#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a=0;
    for(int i=0;i<n;i++)
    {
        for(int i1=i+1;i1<n;i1++)
        {
            if(i!=i1 && (arr[i]^arr[i1])>a)
            {
                a=arr[i]^arr[i1];
            }
        }
    }
    cout<<a;
}

______________________________________________________________________
	