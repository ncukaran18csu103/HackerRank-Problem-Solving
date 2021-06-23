PROBLEM SOLVING
WARMUP START
------------------------------------------------------------------------------------------
//1.solve me first
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    cout<<n+m;
}
------------------------------------------------------------------------------------------
//2.Simple Array sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<sum;
}
------------------------------------------------------------------------------------------
3.Compare the Triplets
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=3;
    int alice[n],bob[n];
    for(int i=0;i<n;i++)
    {
        cin>>alice[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>bob[i];
    }
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(alice[i]>bob[i])
        {
            a++;
        }
        else if(alice[i]<bob[i])
        {
            b++;
        }
        
    }
    cout<<a<<" "<<b;
}
----------------------------------------------------------------------------------------------
4.A very big sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long size;
    cin>>size;
    long  arr[size];
    long sum=0;
    
    for(long i=0;i<size;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<sum;
}

-------------------------------------------------------------------------------------------------
5.Diagonal Difference
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;cin>>size;
    int arr[size][size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cin>>arr[i][j];
        }
    }
    int d1=0,d2=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i==j)
            {
                d1=d1+arr[i][j];
            }
            if(size-1-i==j)
            {
                d2=d2+arr[i][j];
            }
        }
    }
    cout<<abs(d2-d1);
}
----------------------------------------------------------------------------------------------------
6.PLUS minus
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
    float pos,neg,zero;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)neg++;
        else if(arr[i]>0)pos++;
        else zero++;
    }
    cout<<(pos/n)<<endl<<neg/n<<endl<<zero/n;
}
-----------------------------------------------------------------------------------------------------------
7.Min Max sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long n=5;
    int arr[n];
    long long sum=0,min=2549617833 ,max=-2549617832;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<min)
        {min=arr[i];}
        if(arr[i]>max)
        {
            max=arr[i];
        }
        sum=sum+arr[i];
    }
    
    cout<<sum-max<<" "<<sum-min;
    
}
--------------------------------------------------------------------------------------------------------------
8.Birthday candles cake
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
    sort(arr,arr+n);
    int max=arr[n-1];
    int count=0;
    for(int i=0;i<n;i++)
        {
            if(max==arr[i] && max==arr[n-1])
            {
                count++;
            }
        }
    
    cout<<count;
}
-----------------------------------------------------------------------------------------------------------------------
9.Time conversion
#include<iostream>
#include<cstdio>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int hh, mm, ss;
    hh = (s[0] - '0') * 10 + (s[1] - '0');
    mm = (s[3] - '0') * 10 + (s[4] - '0');
    ss = (s[6] - '0') * 10 + (s[7] - '0');

    if (hh < 12 && s[8] == 'P') hh += 12;
    if (hh == 12 && s[8] == 'A') hh = 0;

    printf("%02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}
----------------------------------------------------------------------------------------------------------------------
WARMUP DONE


IMPLEMENTATION START
---------------------------------------------------------------------------------------------
1.APPLE and ORANGE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;cin>>s>>t;
    int a,o;cin>>a>>o;
    int n_a,n_o;cin>>n_a>>n_o;
    int apple[n_a],orange[n_o];
    for(int i=0;i<n_a;i++)
    {cin>>apple[i];}
    for(int i=0;i<n_o;i++)
    {cin>>orange[i];}
    int count_a=0,count_o=0;
    for(int i=0;i<n_a;i++)
    {
        if(apple[i]+a>=s & apple[i]+a<=t)
        {
            count_a++;
        }
    }
    for(int i=0;i<n_o;i++)
    {
        if(orange[i]+o>=s)
        {
            if(orange[i]+o<=t)count_o++;
        }
    }
    cout<<count_a<<endl<<count_o;
}
----------------------------------------------------------------------------------------------------
2.Kangaroo
#include<iostream>
using namespace std;
int main()
{
    int x1,v1;cin>>x1>>v1;
    int x2,v2;cin>>x2>>v2;
    int count=0;
    for(int i=0;i<1000000;i++)
    {
        x1=x1+v1;
        x2=x2+v2;
        if(x1==x2)
        {
            cout<<"YES";count++;break;
        }
    }
    if(count==0)cout<<"NO";
    return 0;
}
-----------------------------------------------------------------------------------------------------
3.Breaking best and worst records
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
    int min=arr[0],max=arr[0];
    int count_min=0,count_max=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];count_max++;
        }
        if(arr[i]<min)
        {
            min=arr[i];count_min++;
        }
    }
    cout<<count_max<< " "<<count_min;
    return 0;
}
-------------------------------------------------------------------------------------------------
4.The birthday bar
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for(int i = 0; i < n; i++){
       cin >> c[i];
    }
    int d;
    int m;
    cin >> d >> m;

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if (i + m - 1 < n){
            int sum = 0;
            for (int j = i; j <= i + m - 1; j++){
                sum = sum + c[j];
            }
            if (sum==d) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
-----------------------------------------------------------------------------------------------------------
5.DIIVISIBLE SUM PAIRS
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int k;cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int i1=i+1;i1<n;i1++)
        {
            if((arr[i]+arr[i1])%k==0)
            {
                count++;
            }
        }
    }
    cout<<count;
}
-----------------------------------------------------------------------------------------------
6.MIGRATORY BIRDS
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
    int count=0,max=0,a=0;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int i1=i;i1<n;i1++)
        {
            if(arr[i]==arr[i1] && i!=i1)
            {
                count++;
            }
        }
        if(max<count){max=count;a=arr[i];}
    }
    cout<<a;
}
-------------------------------------------------------------------------------------------------
7.Bill division
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
    int k1;cin>>k1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i]    ;
    }
    sum=sum-arr[k];
    int ac=sum/2;
    if(ac==k1)cout<<"Bon Appetit";
    //else if(ac<k1)cout<<abs(ac-k1);
    else cout<<abs(ac-k1);
}
-------------------------------------------------------------------------------------------
8.Sales by match
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin >>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0,a=0;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int i1=i+1;i1<n;i1++)
        {
            if(arr[i]==arr[i1] && i!=i1)
            {
                count++;
            }
        }
        if(count%2!=0)
        {
            a++;
        }
    }
    cout<<a;
    
}
----------------------------------------------------------------------------------------------------
9.Cats and a Mouse

#include<iostream>
using namespace std;
int main()
{
    
    float n;cin>>n;
    while(n)
    {
        int x,y,z;cin>>x>>y>>z;
        if(abs(x-y)<abs(z-y))cout<<"Cat A"<<endl;
        else if(abs(x-y)==abs(z-y))cout<<"Mouse C"<<endl;
        else cout<<"Cat B"<<endl;
        
        n--;
    }
}
----------------------------------------------------------------------------------------------------
10.THE HURDLE RACE
#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int k;cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])max=arr[i];
    }
    if(max>k)cout<<max-k;
    else cout<<"0";
}
--------------------------------------------------------------------------------------------
11.Angry proffessor
#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n)
    {
        long n1,k;cin>>n1>>k;
        int arr[n1];
        for(int i=0;i<n1;i++)
        {
           cin>>arr[i]; 
        }
        int count=0;
        for(int i=0;i<n1;i++)
        {
            if(arr[i]>=0)
            {
                count++;
            }
        }
        if(count>=k)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        n--;
    }
}
---------------------------------------------------------------------------------------------

12.BEAYTIFUL DAYS OF THE MOVIEW
#include <iostream>
using namespace std;

int reverse(int x) {
  int ret = 0;
  while (x) {
    ret = ret * 10 + x % 10;
    x /= 10;
  }
  return ret;
}

int main() {
  int _i, _j, _k, cnt = 0;
  cin >> _i >> _j >> _k;
  for (int i = _i; i <= _j; i++) {
    int diff = abs(i - reverse(i));
    if (diff % _k == 0) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}

#include<bits/stdc++.h>
using namespace std;

int reverse(int a)
{
    int sum=0;
    while(a)
    {int k=a%10;
    sum=sum*10+k;
    a=a/10;}
    return sum;
}
int main()
{
    int n,n1,k;cin>>n>>n1>>k;
    int count=0;
    for(int i=n;i<=n1;i++)
    {
        int diff=abs(i-reverse(i));
        if(diff%k==0)
        {
            count++;
        }
    }
    cout<<count;
}
------------------------------------------------------------------------------------
13.SAVE the prisoner 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ /*   int tt;
    cin >> tt;
    for(int i = 0; i<tt; i++) {
        int n, m, s;
        cin >> n >> m >> s;
        cout << (m - 1 + s - 1) % n + 1 << "\n";
    }
*/
    
    int n1;cin>>n1;
    for(int i=0;i<n1;i++)
    {
        int a=0;
        int n,m,s;cin>>n>>m>>s;
        cout<<(m-1+s-1)%n+1<<endl;
    }
    return 0;
}

--------------------------------------------------------------------------------
14.Find digits
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        long long n, m;
        int digitCount = 0;

        cin >> n;
        m = n;

        while(m > 0) {
            int curDigit = m % 10;
            m /= 10;
            if(curDigit != 0 && n % curDigit == 0) {
                digitCount++;
            }
        }
        cout << digitCount << "\n";
    }

    return 0;
}
----------------------------------------------------------------------------
15.GRADING STUDENTS
#include <bits/stdc++.h>
using namespace std;

void solution() {
     int n, x;
     cin>>n;
     for(int i=0; i<n; i++){
        cin>>x;
        if(x>=38 and x%5>=3){
            while(x%5!=0){
               x++;
            }
        }
        cout<<x<<endl;
     }
}

int main () {
    solution();
    return 0;
}
----------------------------------------------------------------------------
16.Drawing book
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, p, f, b;

    cin >> n;
    cin >> p;
    assert(n>0 && n<=100000 && p>0 && p<=n);

    f = p/2;
    if(n%2 == 0)
        b = (n-p+1)/2;
    else
       b = (n-p)/2;

    cout << min(f, b) << "\n";
}
--------------------------------------------------------------------------------
17.Electronic Shop(7/16 pass)
#include<iostream>
using namespace std;
int main()
{
    long price;cin>>price;
    long a,b;cin>>a>>b;
    int key[a];int drive[b];
    for(int i=0;i<a;i++)
    {cin>>key[i];}
    for(int i=0;i<b;i++)
    {cin>>drive[i];}
    long sum=0,max=0;
    for(int i=0;i<a;i++)
    {
        sum=0;
        for(int i1=0;i1<b;i1++)
        {
            sum=key[i]+drive[i1];
            if(sum<=price && sum>max)
            {
                max=sum;
            }
        }
    }
    if(sum>price)cout<<"-1";
    else cout<<sum;
}
--------------------------------------------------------------------------------------
18.Forming a maqic suare
DIFFICULT STAR MARKED
-----------------------------------------------------------------------------------------------------
19.PICKING NUMBERS

#include <bits/stdc++.h>

using namespace std;

int N;
int A[1000];

int main()
{
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        int a;
        scanf("%d", &a);
        A[a]++;
    }
    int ans=0;
    for(int i=1; i<1000; i++)
        ans=max(ans, A[i-1]+A[i]);
    printf("%d\n", ans);
    return 0;
}

--------------------------------------------------------------------------------------------
20.UToopian tree
#include <bits/stdc++.h>

using namespace std;

int fast_exp(int base, int exp) {
    int res = 1;
    while (exp > 0) {
       if (exp % 2 == 1) res = (res * base);
       base = (base * base);
       exp /= 2;
    }
    return res;
}

int main() {
    int t;
    int n, i;
    cin >> t;
    for (i = 0; i< t; i++) {
        cin >> n;
        cout << fast_exp(2, (n + 1) / 2 + 1) - 1 - (n % 2) << endl;
    }
    return 0;
}
---------------------------------------------------------------------------------------------------
21.Strange Adverstising
#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int sum=0;int k=5;
    for(int i=0;i<n;i++)
    {
        int a=k/2;
        sum=sum+a;
        k=a*3;
    }
    cout<<sum;
}
--------------------------------------------------------------------------------------------------
22.Jumping the clouds

include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    int thunder_cloud = 0;
    for(int i = 0;i < n;i++){
       int ci;
       cin >> ci;
       if(i % k == 0)
        thunder_cloud = thunder_cloud + ci;
    }
    cout << 100 - n/k - thunder_cloud*2 << endl;
    return 0;
}
------------------------------------------------------------------------------------------------	
23.Sherlock and squares
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;cin>>n;
    while(n)
    {
        long long a,b;cin>>a>>b;long count=0;
        for(int i=a;i<=b;i++)
        {
            long  c=sqrt(i);
            if(c*c==i)
            {
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
        n--;
    }
}
/*
    while(t--) {
        long long int a, b, ans = 0, i;
        cin >> a >> b;
        for(i=1; ; i++) {
            if (i * i > b) break;
            if (i * i <= b && i * i >= a) ans++;
        }
        cout << ans << endl;
    }
*/
----------------------------------------------------------------------------------------------
24.Cut the sticks
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector <int> height(N);

    for(int i = 0; i < N; ++i) {
        cin >> height[i];
    }

    int mx = *max_element(height.begin(), height.end());
    while(mx > 0) {
        int mn = mx;
        int cuts = 0;

        for(int i = 0; i < (int)N; ++i) {
            if(height[i] > 0)
                mn = min(mn, height[i]);
        }
        for(int i = 0; i < (int)N; ++i) {
            if(height[i] > 0) {
                cuts++;
                height[i] -= mn;
            }
        }

        cout << cuts << "\n";
        mx = *max_element(height.begin(), height.end());
    }

    return 0;
}
/*#include<bits/stdc++.h>
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
    cout<<n<<endl;
    while(n>1)    
    {int min=10000;
    for(int i=0;i<n;i++)
    {
        if(min>arr[i]){min=arr[i];}
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(min>=arr[i])count++;
    }
        cout<<n-count<<endl;
        n=n-count;
        
    }
}
*/
-------------------------------------------------------------------------

25.Equalize the array
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
    int max=0,count=0;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int i1=i+1;i1<n;i1++)
        {
            if(arr[i]==arr[i1])
            {
                count++;
            }
        }
        if(max<count)max=count;
    }
    cout<<n-max-1;
}
----------------------------------------------------------------------------
26.Jummping of the clouds
/*#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    int count=0,count1=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i+1]==0 && arr[i+2]==1)
        {
            count=count+1;
        }
        else if(arr[i+2]==0 || arr[i+1]==1)count=count+1;
        else count=count;
        
    }
    cout<<count;
}*/
#include <bits/stdc++.h>
using namespace std;

const int inf = 555;
int A[111], dp[111];

int main() {
    int n; cin >> n;

    for(int i=1; i<=n; i++) {
        cin >> A[i];
    }
    for(int i=2; i<=n; i++) {
        if(A[i] == 0) dp[i] = min(dp[i-1], dp[i-2]) + 1;
        else dp[i] = inf;
    }
    cout << dp[n] << "\n";
    return 0;
}
----------------------------------------------------------------------------------------------
27.LONGEST FACTORIAL
/*#include<iostream>
using namespace std;
int main()
{
    long n;cin>>n;long long mul=1,sum=1;
    for(long long i=n;i>3;i--)
    {
        sum=((i-1)*i);
        
        mul=mul*sum;
       
        i--;
    }
     cout<<mul*2<<endl;
    
}
*/

#include <vector>
#include <iostream>

using namespace std;

int main() {
    int val;
    int carry = 0;
    cin >> val;
    vector <int> arr(200, 0);
    arr[0] = 1; //Initial product = 1

    int k = 0; //Current size of the number stored in arr

    for(int i = 1; i <= val; i++) {
        for(int j = 0;j <= k; j++) {
            arr[j] = arr[j] * i + carry;
            carry = arr[j] / 10;
            arr[j] = arr[j] % 10;
        }
        while(carry) { //Propogate the remaining carry to higher order digits
            k++;
            arr[k] = carry % 10;
            carry /= 10;
        }   
    }
    for(int i = k; i >= 0; i--) {
        cout << arr[i];
    }
    cout << endl;
    return 0;
}
---------------------------------------------------------------------------------------
28.Beaytiful triplets
#include<iostream>
using namespace std;
int main()
{   int n;
    cin>>n; 
    int target;cin>>target;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a,b,c;
    int count=0;
    for(int i=0;i<n;i++)
    {
        int a=arr[i];
        for(int i1=i+1;i1<n;i1++)
        {
            int b=arr[i1];
            int b1=b-a;
            if(b1==target)
            {
                    
                for(int i2=0;i2<n;i2++)
                {
                    int c=arr[i2];
                    int c1=c-b;
                    if(c1==target)
                    {
                        count++;
                    }
                }
            }
        }
    }
    cout<<count;
}
--------------------------------------------------------------------------------
29.Minimum distances
#include<iostream>
using namespace std;
int main()
{
    long long  n;cin>>n;
    long long  arr[n];
    for(long long  i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long  min=1000;
    long long a=0;
    for(long long  i=0;i<n;i++)
    {
        for(long long  j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                a=abs(i-j);
                if(a<min)
                {
                    min=a;
                }
            }
        }
    }
    if(a>0)cout<<a;
    else cout<<"-1";
}
------------------------------------------------------------------------------------------
30.Hawloen sale
p, d, m, s = map(int, raw_input().strip().split())
games = 0
while s >= p:
    s -= p
    p = max(p - d, m)
    games += 1
print games
-----------------------------------------------------------------------------
31.choclate fast
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int sum=0;
    int count=0;
    while(n--)
    {
        int n,c,m;cin>>n>>c>>m;
        int a=n/c;
        int sum=sum+a;
        while(a>=0)
        {
            int k=a/m;
            a=(a+k-m);
            sum=sum+k;
        }
        if(sum>=0)cout<<sum<<endl;
        sum=0;
        count++;
        
        if(n==0)break;
    }
}
--------------------------------------------------------------------------------------------
32.ICECREAM PARLOR
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n>0)
    {
        int n1,k;
        cin>>n1>>k;
        int arr[k];
        for(int i=0;i<k;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<k;i++)
        {
            for(int i1=i+1;i1<k;i1++)
            {   
                if(arr[i]+arr[i1]==n1)
                {
                    cout<<i+1<<" "<<i1+1<<endl;
                }
            }
        }
        
    }
}
---------------------------------------------------------------
33.