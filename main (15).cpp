/*
3
------------
A B C 
B C D 
C D E 




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
    char count=64+i;
       
       while(j<=i){
           cout<<count<<" ";
           j=j+1;
           //count=count+1;
       
        }
        
       cout<<endl;
       i=i+1;
   }

    return 0;
}
