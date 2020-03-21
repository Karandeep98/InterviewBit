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

