#include<iostream>
using namespace std;

int largestarray(int a[])
{
    int max=a[0];
    for(int i=0;i<6;i++)
    {
if(a[i]>max && )
{
    max=a[i];
}
    }
    return max;
}
int main()
{
    int a[6]={12,35,1,10,34,1};
    cout<<largestarray(a)<<endl;

}