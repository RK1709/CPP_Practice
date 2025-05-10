#include <iostream>
#include <limits.h>
using namespace std;
int findmax(int arr[],int size)
{
    int x=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>x)
        {
          x=arr[i];
        }
    }
    return x;
}
int main()
{
    int arr[]={2,3,7,0};
    int size=sizeof(arr)/sizeof(arr[0]);
   int ans= findmax(arr,size);
   cout<<"max number is "<<ans<<endl;
  

}