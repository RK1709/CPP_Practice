#include <iostream>
#include <vector>
using namespace std;
int main()

{
vector<int>arr{10,11,10,13,13,11,20};
int ans=0; 
for(int i=0;i<arr.size();i++)
{
    
    ans= ans^arr[i];
}
return ans;
}