#include <iostream>
using namespace std;

int main()
{
    int row,col,i,j;
    cin>>row>>col;
    for(i=1;i<=row;i++)
    {
        if(i==1 && i==col)
        {
            cout<<"*";
        }
        else if(i!=1 && i!= col)
        {
         for(j=2;j<col;j++)
         {
             cout<<" ";
         }
         cout<<"\n";
        }

    }

}

