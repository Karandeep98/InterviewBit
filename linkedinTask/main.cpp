#include <iostream>

using namespace std;

int main()
{
  int n;
  cout<<"Enter value of n:";
  cin>>n;
  char x='A';
  for(int i=0;i<n;i++){
         int spaces=n-i-1;
                while(spaces>0){
                    cout<<" ";
                    spaces--;
                }
        for(int j=0;j<=i;j++){

            cout<<x<<" ";
            x++;
        }
        cout<<endl;
  }
    return 0;
}
