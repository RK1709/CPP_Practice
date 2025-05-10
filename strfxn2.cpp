#include <iostream>
#include <string>
using namespace std;

int main()
{

string str="Hello ,how are you";
cout<<"Your string is "<<str<<endl;
cout<<"length of the string :- "<<str.length()<<endl;
cout<<"Capacity of the string :- "<<str.capacity()<<endl;
str.resize(100);
cout<<"Now capacity of the string :- "<<str.capacity()<<endl;
str.clear();
cout<<"Your string has been cleared"<<endl;
cout<<str;
cout<<"Nothing to print";


}