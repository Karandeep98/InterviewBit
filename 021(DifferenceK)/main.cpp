#include <bits/stdc++.h>
using namespace std;
int main()
{
    // O(n) solution
    vector<int> A{1,3,6,8,13,19};
    int B=5;
    int i=0,j=0;
    bool flag=false;
    while(i<A.size() && j<A.size()){
        if(A[j]-A[i]==B &&i!=j){
            flag=true;
        cout<<"Difference of "<<B<<" found between "<<A[j]<<" and "<<A[i];
        break;
        }
        else if(A[j]-A[i]<B) j++;
        else i++;
    }
    if(!flag)
    cout<<"Difference of "<<B<<" is not present b/w any 2 elements in the given array!!";
    return 0;
}


