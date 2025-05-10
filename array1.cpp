#include <iostream>
#include <vector>
using namespace std;

int linearsearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
       if(arr[i]==key)
       {
        return i;
       } 
    }
    return -1;
}

int main()
{
    int arr[5]={11,15,13,18,21};
    int size =sizeof(arr)/sizeof(arr[0]);
    int key=13;
    int ans=linearsearch(arr,size,key);
    if(ans==-1)
    {
        cout<<"Key not found"<<endl;
    }
    else
    
{
 cout<<ans<<endl;
}
   

return 0;

}