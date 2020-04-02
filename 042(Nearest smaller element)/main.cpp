#include <bits/stdc++.h>

using namespace std;
//O(n^2) approach
/*vector<int> prevSmaller(vector<int> &A) {
    vector<int> v;
    for(int i=0;i<A.size();i++){
        int j=i;
        int flag=0;
        while(j-1>=0){
           if(A[j-1]<A[i]) {
                v.push_back(A[j-1]);
                flag=1; break;
           }
           j--;
        }
        if(flag==0) v.push_back(-1);
    }
    return v;
}*/
//O(n) approach
vector<int> prevSmaller(vector<int> &A) {
    vector<int> v;
    stack<int> s;
    for(int i=0;i<A.size();i++){
            while(!s.empty() && s.top()>=A[i]){
                s.pop();
            }
            if(s.empty())
                v.push_back(-1);
            else
                v.push_back(s.top());

            s.push(A[i]);
    }
    return v;
}
int main()
{
    vector<int> a{34, 35, 27, 42, 5, 28, 39, 20, 28};
    vector<int> b;
    b=prevSmaller(a);
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }

    return 0;
}
