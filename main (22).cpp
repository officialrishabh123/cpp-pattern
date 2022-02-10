/*
4
---------------
   1
  22
 333
4444






*/
#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int i=1;
   
    
    while(i<=x){
        
       int j=1;
      
        while(j<=x-i){
           cout<<" ";
           j=j+1;

        }
         while(j<=x)
       {
           cout<<i;
           j=j+1;
       }
        
       cout<<endl;
       i=i+1;
   }

    return 0;
}
