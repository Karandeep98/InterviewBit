#include <bits/stdc++.h>
using namespace std;
int main()
{
    // O(n) solution with minimum memory used ( i.e. not using one more vector)
     vector<int> A{2, 0, 1, 2, 0, 3, 2, 2, 2, 1, 0, 0, 0, 1, 0, 0, 2, 2, 2, 3, 2, 3, 1, 2, 1, 2, 2, 3, 2, 3, 0, 3, 0, 2, 1, 2, 0, 0, 3, 2, 3, 0, 3, 0, 2, 3, 2, 2, 3, 1, 3, 3, 0, 3, 3, 0, 3, 3, 2, 0, 0, 0, 0, 1, 3, 0, 3, 1, 3, 1, 0, 2, 3, 3, 3, 2, 3, 3, 2, 2, 3, 3, 3, 1, 3, 2, 1, 0, 0, 0, 1, 0, 3, 2, 1, 0, 2, 3, 0, 2, 1, 1, 3, 2, 0, 1, 1, 3, 3, 0, 1, 2, 1, 2, 2, 3, 1, 1, 3, 0, 2, 2, 2, 2, 1, 0, 2, 2, 2, 1, 3, 1, 3, 1, 1, 0, 2, 2, 0, 2, 3, 0, 1, 2, 1, 1, 3, 0, 2, 3, 2, 3, 2, 0, 2, 2, 3, 2, 2, 0, 2, 1, 3, 0, 2, 0, 2, 1, 3, 1, 1, 0, 0, 3, 0, 1, 2, 2, 1, 2, 0, 1, 0, 0, 0, 1, 1, 0, 3, 2, 3, 0, 1, 3, 0, 0, 1, 0, 1, 0, 0, 0, 0, 3, 2, 2, 0, 0, 1, 2, 0, 3, 0, 3, 3, 3, 0, 3, 3, 1, 0, 1, 2, 1, 0, 0, 2, 3, 1, 1, 3, 2};
     int B=2;
     int j=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==B) continue;
    else
        A[j++]=A[i];
    }
   A.resize(j);
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
        return 0;
}
  /*  vector<vector<int>> a(v.size(),vector<int>(3));
    int x=0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
                for(int k=j+1;k<v.size();k++){

                    if(v[i]+v[j]+v[k]==0){
                            a[x][0]=v[i];
                            a[x][1]=v[j];
                            a[x][2]=v[k];
                            sort(a[x].begin(),a[x].end());
                        x++;
                        break;
                        }
                }
        }
    }
    //set<set<int>> s(a.begin(),a.end());
     //a.assign(a.begin(),a.end());
    sort(a.begin(),a.end());
    for(int i=0;i<x;i++){
        cout<<"[ ";
            for(int j=0;j<a[i].size();j++)
                cout<<a[i][j]<<" ";
    cout<<"]";
    }*/

