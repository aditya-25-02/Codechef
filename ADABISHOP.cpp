#include <bits/stdc++.h>
#define ll long long int 

using namespace std;


int main() {
  
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  
  int t;
  cin>>t;
  
while(t--)  
 {  
  int ri , ci ;  // intial row and column
  cin>>ri>>ci;
  
  if (ri!=ci)
    {
        int diagonal_index = (ri+ci) /2 ;
        cout<<"27"<<"\n";
        cout<<diagonal_index<<" "<<diagonal_index<<"\n";
    }
    
    if(   (ri==ci)   &&  (ri!=1 && ci!=1) )
    cout<<"26"<<"\n";
    
    if( (ri==ci) && (ri==1 && ci==1 ))
    cout<<"25"<<"\n";
    
      if(ri!=1 || ci!=1)
      cout<<"1"<<" "<<"1"<<"\n";
      
      int counter=1;
      
      for(int i=2 ; i<5 ; i++)
        {
  
            int  r_now = i+counter; 
            int  c_now = i-counter;
            
            cout<<i<<" "<<i<<"\n";
            
            for(int i=0 ; i<2 ; i++)
             {
                 int temp=r_now;
                 
                 cout<<r_now<<" "<<c_now<<"\n";
                 
                 r_now=c_now;
                 c_now=temp;
             }
             cout<<i<<" "<<i<<"\n";
             counter++;
         }        
        
           counter=3;  
           for(int i=5 ; i<9 ; i++)
             {
                 int  r_now = 8; 
                 int  c_now = i-counter;
               
                 cout<<i<<" "<<i<<"\n";
                 
                 if(i==8)
                 break;
               
                 for(int j=0; j<2 ; j++)        
                   {
                       int temp=c_now;
                       cout<<r_now<<" "<<c_now<<"\n";
                       c_now=r_now;
                       r_now=temp;
                   }      
                   
                 cout<<i<<" "<<i<<"\n";
                 counter--;
             } 
 }          
     return 0;
}
