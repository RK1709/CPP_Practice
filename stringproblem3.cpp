//convert into upper cases
//string str="wElCoMe"

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s="wElCoMe";
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            s[i]=s[i]-32;
        }
        
    }
    cout<<s;
}