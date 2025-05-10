#include <iostream>
#include <vector>
 using namespace std;

int linearsearch(vector<int>arr,int key)
{
    for(int i=0;i<arr.size();i++)

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
vector<int>arr={10,11,12,13};
int key=13;
int ans = linearsearch(arr,key);
if(ans==-1)
{
    cout<<"Not such element";
}
else
{
cout<<"element found at index"<<ans<<endl;
}

 }