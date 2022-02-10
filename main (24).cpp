/*
4
-----------
   1
  121
 12321
1234321






*/
#include <iostream>

using namespace std;

int main()
{
  int x;
  cin >> x;
  int i = 1;

  while (i <= x){

      int j = 1;
      
      int count=1;

      while (j <=x-i){
    	  cout <<" " ;
    	  j = j + 1;
      }
	
      while (j <=x){
    	  cout <<count;
    	  j = j + 1;
    	  count=count+1;
    	  }
    	  
    	 j=1;
         int temp=1; 
           while(j<i){
              cout<<i-temp;
             j=j+1;
             temp=temp+1;
             
         }
    
      cout << endl;
      i = i + 1;
    }

  return 0;
}
