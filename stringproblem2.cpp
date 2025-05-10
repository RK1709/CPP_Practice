//convert the below string into lower case else print cases are different
//string s="wELCOME"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s ="wELCOME";
    for(int i=0;s[i]!=0;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
        else{
            cout<<"Not possible";
        }
    }
}