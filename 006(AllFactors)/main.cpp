#include <bits/stdc++.h>
using namespace std;

vector<int> allFactors(int A) {
    vector<int> a;
    for(int i=1;i<=sqrt(A);i++){
        if(A%i==0) {
            a.push_back(i);
            if(i!=(A/i))
            a.push_back(A/i);
        }
    }
   sort(a.begin(),a.end());
    return a;
}
int main()
{
    int x;vector<int>a;
    cin>>x;
    a=allFactors(x);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
 return 0;
}