/*
4
-----------

****
***
**
*

 



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
        while(j<=x-i+1){
           cout<<"*";
           j=j+1;

        }
        
        
       cout<<endl;
       i=i+1;
   }

    return 0;
}
