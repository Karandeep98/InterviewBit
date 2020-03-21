#include <bits/stdc++.h>
using namespace std;
int main()
{
    //O(n) solution
    vector<int> A{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };

   // sort(A.begin(),A.end()); // No need to do this if given array is already sorted
         vector<int> v;
    for(int i=0;i<A.size();i++){
        if(i<A.size()-2 &&A[i]==A[i+2]){
            continue;
              }
        else{
            v.push_back(A[i]);
        }
    }
    A.resize(v.size());
    for(int i=0;i<v.size();i++){
        A[i]=v[i];
    }
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }

        return 0;
}