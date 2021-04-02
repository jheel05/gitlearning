#include <iostream>

using namespace std;

int main()
{
  int i,j,p,q;
    cin>>i>>j;

    for(p=1;p<=i;p++)
    {

       for(q=1;q<=j;q++)
       {
           cout<<"*";
       }
       cout<<"\n";
    }
    return 0;
}
