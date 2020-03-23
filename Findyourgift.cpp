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

ll min(ll a, ll b ){ return a<b ? a:b ;}
ll max(ll a, ll b ){ return a<b ? b:a ;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
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
             int n ; 
             cin>>n; 

             int a[n] , max =0 , max_index = (n/2)-1 ;

             rep(i,0,n)
                {
                  cin>>a[i];
                  if(a[i]>max)
                     max=a[i];
                }
             int min_index = -1 ;
                
             rep(i,0,n/2)
                {
                    if(a[i]==max)
                       {
                        min_index=i;  
                        break;
                       } 
                }

              per(i,(n/2)+1,n)
                 {
                    if(a[i]==max)
                    {
                        max_index=i;
                        break;
                    }
                 }  
              
              if(min_index<0)
                 cout<<n-1-max_index<<"\n";
              else
                 cout<<(n/2)-(min_index+1)+(n-1-max_index)<<"\n";       
         }
	return 0;
}