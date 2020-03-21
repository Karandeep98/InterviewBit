#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{ 1, -4, 0, 0, 5, -5, 1, 0, -2, 4, -4, 1, -1, -4, 3, 4, -1, -1, -3};
        set<int> s(v.begin(),v.end());
        v.assign(s.begin(),s.end());
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<"\nNew Size="<<v.size();
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

