#include <iostream>
#include<string>
using namespace std;

int main(){

    string str="Welocme buddy";
    string::iterator it;
    int count =0;
    for(it=str.begin();it!=str.end();it++)
    {
        count=count+1;
    }
    cout<<count;

}