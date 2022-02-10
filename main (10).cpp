/*
4
---------
1 
2 1 
3 2 1 
4 3 2 1 



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
      int count=i;
       while(j<=i){
           cout<<count<<" ";
           j=j+1;
           count=count-1;
        }
       
       cout<<endl;
       i=i+1;
   }

    return 0;
}
