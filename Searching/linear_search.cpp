
//The linear search is a searching algorithm 

//In linear search we compare every element of an array with the desired element until the element is found

/* Time complexity of linear search 
    
    Best Case - O(1)
    Average case - O(N/2)
    Worst Case - O(N)
    where N is the length of the array
    
*/

// C++ Code

#include<iostream>
using namespace std;
int main()
{
      //n is length of array,x is element to be found
      int n=5,x=4;
      int a[]={1,2,3,4,5};
      bool flag=false;
      for(int i=0;i<n;i++)
      {
        //compares every element of array with x
        //if x is found sets flag as true
          if(a[i]==x)
          {
              flag=true;
              break;
          }
      }
      if(flag==true)
          cout<<"Element found! search successful"<<endl;
      else
          cout<<"Element not found"<<endl;
      return 0;
}
              
      
