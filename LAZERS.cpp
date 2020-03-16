#include<bits/stdc++.h>
#define ll long long int 

using namespace std;

void solve()
{
    ll  n , q ;
    cin >> n >> q ;
    
    ll  a[n] ;
    
    for( int i=0 ; i< n ; i++ )
    cin>>a[i];
    
    int total =0 ;
    
    for(int i=0 ; i< q ; i++)
      {
            ll x1 , x2 , y , count = 0  ;
            cin>> x1 >> x2 >> y ;
            for( int i=0 ; i< n-1 ; i++)
               {
                   // cout<<"Points now are"<<" ( x1= "<<x1<<" y = "<<y<<")  (x2 = "<<x2<<" y = "<<y<<")  "<<" ( x = "<<i+1<<" y = "<<a[i]<<")  ("<<" x = "<<i+2<<" y = "<<a[i+1]<<" ) \n";
                   if( y <= max(a[i+1],a[i])  && y >= min(a[i+1],a[i])  )
                    {
                    //    cout<<"Y check\n";
                         if( x1 <= i+1 && x2 >= i+2 )
                           {
                        //       cout<<"X check\n";
                               if(  ( (x2==i+1) && (y==min(a[i+1],a[i]) ) )  ||  ( (x1==i+2) && (y==max(a[i+1],a[i])) ))
                               continue;
                               else
                               count++;
                           }
                    }       
                      //  if(count)
                      //    cout<<"Yes it intersect "<<" line segment from "<<x1<<" "<<y<<" "<<" & "<<x2<<" "<<y<<" cut "<<i+1<<"
               }
               cout<<count<<"\n";
      }
    
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    
    while(t--)
    solve();
    
    return 0;
}