#include <iostream>
#include <string>
using namespace std;

int main(void){

    string str="you are writing a string";
    cout<<"Capacity of the string :- "<<str.capacity()<<endl;
    str.append(" added a string");
    cout<<"now capacity of the string :- "<<str.capacity()<<endl;

     cout<<str;
}