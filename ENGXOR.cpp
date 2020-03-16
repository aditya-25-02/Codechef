#include <bits/stdc++.h>
#define ll long long int 

using namespace std;
  
int number_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3,1, 2, 2, 3, 2, 3, 3, 4 }; 

ll countBits( ll temp) 
{ 
    int nib = 0; 
    if (temp==0) 
    return number_to_bits[0]; 
    nib = temp & 0xf; 
    return number_to_bits[nib] + countBits(temp >> 4); 
} 

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0);
  
  int t;
  cin>>t;
  
  while(t--)
      {
         int n , q ;
         cin >> n >> q ; 
         
         ll a[n] ,  even_in_a =0 , odd_in_a = 0;
         
         for(int i=0; i < n ; i++)
         {
           cin>>a[i];
           if( countBits(a[i])%2==0 )
           even_in_a++;
           else
           odd_in_a++;
         }  
         
         for(int i=0 ; i<q ; i++)
              {
                  int p , even , odd ;
                  cin>>p;
                  
                  if( countBits(p)%2==0 )
                   {
                      even=even_in_a;
                      odd=odd_in_a;
                   }
                  else
                   {
                      even=odd_in_a;
                      odd=even_in_a;
                   }
                  cout<<even<<" "<<odd<<"\n";     
              }
      }
  
  return 0;
}