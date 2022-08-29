#include <iostream>
using namespace std;

int maxsub (int arr[] , int n)
{
  int max_new = INT_MIN;
  int curr_max = 0 ;
  
  for(int i =0 ; i<n ; i++)
  {
      curr_max = curr_max + arr[i];
      
      if (curr_max > max_new )
      {
          max_new = curr_max  ;
      }
      if (curr_max < 0) 
      
      {
          curr_max = 0;
      }
  }
  return max_new ; 
    
   
}

int main(){
    int arr[8]={-2, -3, 4, -1, -2, 1, 5, -3};
    int n = 8;
    int max = maxsub(arr,n);
    cout<<"max sum is "<<max ;
    return 0;
}
