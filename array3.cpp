#include <iostream>
using namespace std;
void count_0_1(int a[],int size)
{
    int onecount =0;
    int zerocount =0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==1)
        {
         onecount =onecount+1;
        }
         //cout<<"One is"<<onecount<<endl;
        if(a[i]==0)
            {
                zerocount =zerocount+1;
                //return zerocount;
            }
            //cout<<"zero is "<<zerocount<<endl;
    }
    cout << "One count is " << onecount << endl; // Moved the print statements here
    cout << "Zero count is " << zerocount << endl;
}


int main()
{
int a[]={10,0,1,1,1,1,1,0,2,1};
int size = sizeof(a)/sizeof(a[0]);
count_0_1(a,size);

}