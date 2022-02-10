/*

1 2 3 4
5 6 7 8
9 10 11 12

*/
#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int i=1;
    int count=1; 
   while(i<=x){
       int j=1;
      
       while(j<=x+1){
           cout<<count<<" ";
          
           j=j+1;
            count=count+1;
       }
       
       cout<<endl;
       i=i+1;
   }

    return 0;
}
