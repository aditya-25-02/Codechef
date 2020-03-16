#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve ()
{
    ll n ;
    cin>>n;
    
    ll a[n] , b[n] ;
    
    for( ll i=0 ; i<n ; i++)
    cin>>a[i];
    
    for( ll i=0 ; i<n ; i++)
    cin>>b[i];
    
    sort(a,a+n);
    sort(b,b+n);
    
if(n==1)
  {
    if( b[0] > a[0] )
    cout<<"YES\n";
    else
    cout<<"NO\n";
  }

else
  {    
    ll chef_final = a[n-1] , friend_final = b[n-1] , chef_initial = a[0] , friend_initial = b[0] , count = 0 ;  
   
    if( chef_final < friend_final && chef_initial < friend_initial )
      {
          for(ll i=1 ; i<n ; i++)
           {
               
                if(a[i]==a[i-1])
                  {
                    if(i==n-1)
                    count++;
                    
                    continue;
                  }    
                
                ll no=0 ,  temp = a[i] ;
                
                for(ll j=0 ; j<i ; j++)
                    {
                      if(temp == b[j])
                      break;
                      
                      if(j==i-1)
                      no++;
                    }
                    
                if(no)
                  {
                   cout<<"NO\n";
                   break;
                  }
                  
                if(no==0 && i==n-1)
                count++;
               
            }
      }
      
     else
     cout<<"NO\n";
      
       if(count)
         {
           for(ll i=0 ; i < n ; i++)
             {
                if( b[i] <= a[i] )
                    {
                      cout<<"NO\n";
                      break;
                    }
                
                if(i==n-1)  
                cout<<"YES\n";
             } 
             
         }
   }
   
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL) ; cout.tie(NULL) ;
    
    ll t , s ;
    cin>> t >> s ;
    
    if(s==1)
      {
       while(t--)
       solve();
      }
    
    return 0;
}