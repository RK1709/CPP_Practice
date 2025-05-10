#include <iostream>
#include <string>
using namespace std;

int ispalin(string & s)
{
    int l=0;
    int r=s.length()-1;
    while(l<r)
    {
        if(s[l]!=s[r] && )
        return 0;
        l++;
        r--;
    }
    return 1;
}
int main()
{
    string s ="Abba";
    cout<<ispalin(s);
}