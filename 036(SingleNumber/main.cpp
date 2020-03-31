#include <bits/stdc++.h>

using namespace std;
int singleNumber(const vector<int> &A) {
    int result=0;
    for(int i=0;i<A.size();i++){
        result=result ^ A[i];
    }
    return result;
}

int main()
{
    vector<int> v{1,2,3,2,4,4,1};
    cout<<singleNumber(v);
    return 0;
}
