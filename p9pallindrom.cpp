#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
      
      for(i=1;i<=n;i++){
        int k=i;
        for(j=1;j<=(n-i);j++){
          cout<<" ";
        }
        for(;j<=n;j++){
          cout<<k<<" ";
          k--;
        }
        k=1;
        for(;j<=(2*n-1);j++){
          cout<<" ";
        }
        cout<<"\n";
      }
    return 0;
}