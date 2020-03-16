#include <bits/stdc++.h>
#define ll long long int 
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

void solve (){
    
    int n , m;
    cin>> n >> m;
    
    int f[n] , p[n] ;
    
    vector <int> sum{};
    
    for( int i=0 ; i< n ;i++)
    cin>>f[i];
    for( int i=0 ; i< n ;i++)
    cin>>p[i];
    
    for(int i=0; i<m ; i++)
    {
        int temp=i+1 , counter=0 , temp_sum=0;
        
        for(int j=0; j<n ; j++)
        {
            if(f[j]==temp)
            {
              counter++;
              temp_sum+=p[j];
            }          
            if(j==n-1 && counter==0)
            temp_sum=2500;
        }
        sum.push_back(temp_sum);
    }
    
    int min_sum=2500;
    for(int a:sum)
      {
         // cout<<a<<"\n";
         if(a<min_sum)
         min_sum=a;
      }
      
      cout<<min_sum<<"\n";
}


int main() {
	 
	fastio
	
	int t;
	cin>>t;
    while(t--)
    solve();
    
	return 0;
}
