#include <bits/stdc++.h>

using namespace std;
vector<int> nextGreater(vector<int> &A) {
    vector<int> v;

    for(int i=0;i<A.size();i++){
        int flag=0;
        for(int j=i+1;j<A.size();j++){
            if(A[j]>A[i]){
                flag=1;
                v.push_back(A[j]);
                break;
            }
        }
            if(flag==0) v.push_back(-1);

    }
    return v;
}

int main()
{
  vector<int> A{4,5,2,10};
 A= nextGreater(A);
 for(int i=0;i<A.size();i++){
    cout<<A[i]<<" ";
 }
    return 0;
}
