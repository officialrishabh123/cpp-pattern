/*
3
--------
A 
B B 
C C C 



*/
#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int i=1;
  char count=65;
      
    while(i<=x){
        
       int j=1;
       
       while(j<=i){
           cout<<count<<" ";
           j=j+1;
        }
        
       count=count+1;
       cout<<endl;
       i=i+1;
   }

    return 0;
}
