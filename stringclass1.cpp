#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    char s1[100];
    cout<<"Enter the first string "<<endl;
   cin.getline(s1,100);
    //cout<<s1<<endl;
    char s2[100];
    cout<<"Enter the second string "<<endl;
    cin>>s2;
    cin.getline(s2,100);

    cout<<s1<<endl;
    cout<<s2<<endl;

}
