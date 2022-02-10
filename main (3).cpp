/*

111
111
111

*/
#include <iostream>

using namespace std;

int Pattern3()
{
    int x;
    cin>>x;
    int i=1;
   while(i<=x){
       int j=1;
       
       while(j<=x){
           cout<<i;
           j=j+1;
       }
       
       cout<<endl;
       i=i+1;
   }

    return 0;
}
