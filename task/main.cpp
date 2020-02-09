#include <iostream>

using namespace std;

int main()
{
    int n,c=1;
    cin>>n;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c++;
        }
         int x=c-2;
        for(int k=1;k<i;k++){
            cout<<x<<" ";
            x--;
        }
    cout<<endl;
    }
    return 0;
}
