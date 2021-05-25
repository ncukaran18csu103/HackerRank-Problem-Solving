SOLVE ME FIRST

Complete the function solveMeFirst to compute the sum of two integers.


Return .

Function Description

Complete the solveMeFirst function in the editor below.

solveMeFirst has the following parameters:

int a: the first value
int b: the second value
Returns
- int: the sum of a and b 




#include<iostream>
using namespace std;
int main()
{
    int a,b;cin>>a>>b;
    cout<<a+b;
    return 0;
}



_______________________________________________________

Given an array of integers, find the sum of its elements.

For example, if the array , , so return .

Function Description

Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

simpleArraySum has the following parameter(s):

ar: an array of integers


#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int sum=0;
    for(int i=0;i<n;i++)sum=sum+arr[i];
    cout<<sum;
    return 0;
    
}


____________________________________________________________________

Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from 1 to 100 for three categories: problem clarity, originality, and difficulty.

The rating for Alice's challenge is the triplet a = (a[0], a[1], a[2]), and the rating for Bob's challenge is the triplet b = (b[0], b[1], b[2]).

The task is to find their comparison points by comparing a[0] with b[0], a[1] with b[1], and a[2] with b[2].

If a[i] > b[i], then Alice is awarded 1 point.
If a[i] < b[i], then Bob is awarded 1 point.
If a[i] = b[i], then neither person receives a point.
Comparison points is the total points a person earned.

Given a and b, determine their respective comparison points.

Example

a = [1, 2, 3]
b = [3, 2, 1]

#include<iostream>
using namespace std;
int main()
{
    int n=3,n1=3;
    int arr[n],arr1[n1];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>arr1[i];
    }
    int a=0,b=0;
    for(int i=0;i<3;i++)
    {
        if(arr[i]>arr1[i])
        {
            a++;
        }
        else if(arr[i]<arr1[i]){b++;}
        
    }
    cout<<a<<" "<<b;
    return 0;
}

__________________________________________________________________________

In this challenge, you are required to calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

Function Description

Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.

aVeryBigSum has the following parameter(s):

int ar[n]: an array of integers .
Return

long: the sum of all array elements
Input Format

The first line of the input consists of an integer .
The next line contains  space-separated integers contained in the array.

Output Format

Return the integer sum of the elements in the array.

#include<iostream>
using namespace std;
int main()
{
    long long n;cin>>n;
    long sum=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
}
____________________________________________________________
Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix  is shown below:

1 2 3
4 5 6
9 8 9  
The left-to-right diagonal = . The right to left diagonal = . Their absolute difference is .

Function description

Complete the  function in the editor below.

diagonalDifference takes the following parameter:

int arr[n][m]: an array of integers
Return

int: the absolute diagonal difference
Input Format

The first line contains a single integer, , the number of rows and columns in the square matrix .
Each of the next  lines describes a row, , and consists of  space-separated integers .

Constraints

Output Format

Return the absolute difference between the sums of the matrix's two diagonals as a single integer.

Sample Input

3
11 2 4
4 5 6
10 8 -12
Sample Output

15




#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int i1=0;i1<n;i1++)
        {
            cin>>arr[i][i1];
        }
    }
    int sum=0,sum1=0;
    for(int i=0;i<n;i++)
    {
        for(int i1=0;i1<n;i1++)
        {
            if(i==i1)sum=sum+arr[i][i1];
            if(i1==n-i-1)sum1=sum1+arr[i][i1];
        }
    }
    cout<<abs(sum-sum1);
    return 0;
}


______________________________________________________________
Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with  places after the decimal.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.

Example

There are  elements, two positive, two negative and one zero. Their ratios are ,  and . Results are printed as:

0.400000
0.400000
0.200000
Function Description

Complete the plusMinus function in the editor below.

plusMinus has the following parameter(s):

int arr[n]: an array of integers
Print
Print the ratios of positive, negative and zero values in the array. Each value should be printed on a separate line with  digits after the decimal. The function should not return a value.

Input Format

The first line contains an integer, , the size of the array.
The second line contains  space-separated integers that describe .

Constraints



Output Format

Print the following  lines, each to  decimals:

proportion of positive values
proportion of negative values
proportion of zeros
Sample Input

STDIN           Function
-----           --------
6               arr[] size n = 6
-4 3 -9 0 4 1   arr = [-4, 3, -9, 0, 4, 1]
Sample Output

0.500000
0.333333
0.166667
Explanation

There are  positive numbers,  negative numbers, and  zero in the array.
The proportions of occurrence are positive: , negative:  and zeros: .

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
    float p,ne,z;
    p=0;
    ne=p;z=p;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)z++;
        else if(arr[i]<0)ne++;
        else p++;
    }
    cout<<p/n<<endl<<ne/n<<endl<<z/n;
}
______________________________________________________________________________________

Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Example

The minimum sum is  and the maximum sum is . The function prints

16 24
Function Description

Complete the miniMaxSum function in the editor below.

miniMaxSum has the following parameter(s):

arr: an array of  integers
Print

Print two space-separated integers on one line: the minimum sum and the maximum sum of  of  elements.

Input Format

A single line of five space-separated integers.

Constraints


Output Format

Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. (The output can be greater than a 32 bit integer.)

Sample Input

1 2 3 4 5
Sample Output

10 14
Explanation



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    long long arr[n];
    for(long long  i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long sum=0;
    long long a=arr[0],b=arr[n-1];
    for(long long i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum-b<<" "<<sum-a;
    
}


__________________________________________________________________________________________________________
You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Count how many candles are tallest.

Example


The maximum height candles are  units high. There are  of them, so return .

Function Description

Complete the function birthdayCakeCandles in the editor below.

birthdayCakeCandles has the following parameter(s):

int candles[n]: the candle heights
Returns

int: the number of candles that are tallest
Input Format

The first line contains a single integer, , the size of .
The second line contains  space-separated integers, where each integer  describes the height of .

Constraints

Sample Input 0

4
3 2 1 3
Sample Output 0

2

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int a=arr[n-1],count=0;
    for(int i=0;i<n;i++)
    {
        if(a==arr[i])
        {
            count++;
        }
    }
    cout<<count;
}
__________________________________________________________________________________________________________
TIME CONVERSION

AND PATTERN QUESTION
