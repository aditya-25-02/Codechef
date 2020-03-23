// Aditya verma 
#include<iostream>
#include<string>
#define FASTIO ios_base::sync_with_stdio(false);std::cin.tie(NULL);std::cout.tie(NULL)
#define rep(i,a,n) for( int  i=a ; i<n ; i++)
#define per(i,a,n) for( int  i=n-1 ; i>=a ;i--)
#define pb push_back
#define TLE cerr<<"Time elapsed : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n"
#define vi vector<int> 
#define ll long long int 
#define pii pair<int,int> 
#define db double
#define deb(x) cerr<<#x<<" : "<<x<<"\n";
#define min(lla,llb) { return a<b ? a:b ;}
#define max(lla,llb) { return a<b ? b:a ;}
#define gcd(lla,llb) { return b?gcd(b,a%b):a;}
const ll mod=1000000007;

using namespace std;

int main()
{
    FASTIO;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif
    
    int t;
    cin>>t;
    while(t--)
         {
             ll n ; 
             cin>>n;

             ll a[n] ;
             ll b , c , max ;
             b=c=max= -1; 
             
             rep(i,0,n)
                {
                   cin>>a[i];
                   if(a[i]>max)
                    {
                    max=a[i];
                    b=i;
                    }

                    if(a[i]>=max)   c=i;
                }      
                ll result = n/2-(c-b);
                    
                    result > 0 ? cout<<result<<"\n" :
                                 cout<<"0\n"; 

         }
	return 0;
}