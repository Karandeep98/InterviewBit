#include <bits/stdc++.h>

using namespace std;
/* O(n^2) approach
int findMinXor(vector<int> &A) {
    int x=INT_MAX;
    for(int i=0;i<A.size();i++){
        for(int j=i+1;j<A.size();j++){
            if((A[i]^A[j])<x) {
                    x=A[i]^A[j];
            }

        }
    }

    return x;
}*/
//O(nLog(n)) approach
int findMinXor(vector<int> &A) {
    int x=INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i++){

        if((A[i]^A[i+1])<x) x=A[i]^A[i+1];

    }
    return x;
}


int main()
{
    vector<int> v{8,9,1,0,3};
    cout<<findMinXor(v);
    return 0;
}
