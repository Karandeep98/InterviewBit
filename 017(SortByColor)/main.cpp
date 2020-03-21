#include <bits/stdc++.h>
using namespace std;
int main()
{
    // O(n) solution without using library sort function
    vector<int> A{0,1,2,2,2,2,1,1,1,1,0,0,0,0,2,2,1,1,2,0,1,2,0,1,2,0,1,2,2,2,1,0,1};
    cout<<A.size()<<endl;
    int x=0,y=0,z=0;
   for(int i=0;i<A.size();i++){
       if(A[i]==0) x++;
       else if(A[i]==1) y++;
       else z++;
   }
    for(int i=0;i<x;i++){
        A[i]=0;
    }
    for(int i=x;i<x+y;i++){
        A[i]=1;
    }
    for(int i=x+y;i<x+y+z;i++){
        A[i]=2;
    }
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
  cout<<endl<<A.size();


            return 0;
}