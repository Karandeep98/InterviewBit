#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<" ";
  }
  cout<<0<<endl;
  for(int i=n;i>0;i--){
        int x=i-1;
                while(x>0){
                    cout<<" ";
                    x--;
                }
        for(int j=i;j<=n;j++){

            cout<<j;
        }
    cout<<0;
    for(int j=n;j>=i;j--){
            cout<<j;
        }
    cout<<endl;
  }
    return 0;
}
