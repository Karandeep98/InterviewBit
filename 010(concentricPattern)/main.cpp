#include <bits/stdc++.h>
using namespace std;
   vector<vector<int> > prettyPrint(int A) {
    int n=(2*A)-1;
    vector<vector<int>>v(n,vector<int>(n));
    int top=0,bottom=n-1,left=0,right=n-1;
    while(A>0){
    for(int i=left;i<=right;i++){
        v[top][i]=A;
        v[bottom][i]=A;
    }
    for(int i=top;i<=bottom;i++){
        v[i][left]=A;
        v[i][right]=A;
    }
    left++;right--;top++;bottom--;
    A--;
    }
    return v;
}

    int main()
    {
        int num;vector<vector<int>>v;
        cin>>num;
        v=prettyPrint(num);
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    
        return 0;
    }
