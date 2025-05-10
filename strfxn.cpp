#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"enter the string ";
    getline(cin,str);
    cout<<str<<endl;
    cout<<"Length of string :- "<<str.length()<<endl;
    cout<<"Size of string :- "<<str.size()<<endl;
    cout<<"Capacity of string :- "<<str.capacity()<<endl;
    //cout<<"Capacity of string :- "<<str.resize()<<endl;
    cout<<"Maximum size of string :- "<<str.max_size()<<endl;
    //cout<<"string has been cleared :- "<<str.clear()<<endl;
}