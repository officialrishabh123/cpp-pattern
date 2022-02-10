/*
5
---------------
1234554321
1234**4321
123****321
12******21
1********1





*/
#include <iostream>

using namespace std;

int main()
{
  int x;
  cin >> x;
  int i = 0;

  while (i< x){

      int j = 1;
      int count=0;
      while(j<=x-i){

          cout<<j;
          j=j+1;
          
      }
      while(j<=x){
          cout<<"*";
          j=j+1;
      }
      j=0;
      while(j<i){
        cout<<"*";  
        j=j+1;
          
      }
      while(j< x)
      {
          cout<<x-count-i;
          count=count+1;
          j=j+1;
      }
      
    
      cout << endl;
      i = i + 1;
    }

  return 0;
}
