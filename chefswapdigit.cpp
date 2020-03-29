// Aditya verma 
#include <iostream>
#include<string>
#include<math.h>
#define FASTIO ios_base::sync_with_stdio(false);std::cin.tie(NULL);std::cout.tie(NULL)
#define rep(i,a,n) for( ll i=a ; i<n ; i++)
#define per(i,a,n) for( ll i=n-1 ; i>=a ;i--)
#define pb push_back
#define TLE cerr<<"Time elapsed : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n"
#define vi vector<int>
#define ll long long int 
#define pii pair <int,int> 
#define db double
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define all(x) x.begin(),x.end()
ll min(ll a,ll b){ return a<b ? a:b;}
ll max(ll a,ll b){ return b>a ? b:a;}
ll gcd(ll a,ll b){ return b?gcd(b,a%b):a;}
const ll mod=1000000007;

using namespace std;

int main() {
    FASTIO;
  	#ifndef ONLINE_JUDGE
  	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif
    
    int t ;
    cin>>t;
    while(t--) {
      
      int a , b ;
      cin>>a>>b;

      int sum = a+b ;

      int a1 = a/10 , a2 =a%10 , b1 =b/10 , b2=b%10;
      
      if( (b1*10+a2)+(a1*10+b2) > sum ) sum = (b1*10+a2)+(a1*10+b2);
      if( (b2*10+a2)+(b1*10+a1) > sum ) sum = (b2*10+a2)+(b1*10+a1);
      if( (a1*10+b1)+(a2*10+b2) > sum ) sum = (a1*10+b1)+(a2*10+b2);
      if( (a1*10+b2)+(b1*10+a2)	> sum ) sum = (a1*10+b2)+(b1*10+a2);
      
      cout<<sum<<"\n";
    }
    
    return 0 ;
}