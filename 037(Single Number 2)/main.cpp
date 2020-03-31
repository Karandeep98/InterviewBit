#include <bits/stdc++.h>

using namespace std;
int singleNumber(const vector<int> &A) {
    int count,ans=0;
    for(int i=0;i<32;i++){
        count=0;
        for(int j=0;j<A.size();j++){
            if((A[j]>>i)&1) count++;
        }
        if(count%3==1)  ans+=pow(2,i);

    }
    return ans;
}

int main()
{
    vector<int> v{3,3,3,5,8,8,8};
    cout<<singleNumber(v);
    return 0;
}
