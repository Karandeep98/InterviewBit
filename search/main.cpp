#include <bits/stdc++.h>
using namespace std;
int main()
{
    // O(n) solution without using library sort function
    vector<int> A{0,1,2,2,2,2,1,1,1,1,0,0,0,0,2,2,1,1,2,0,1,2,0,1,2,0,1,2,2,2,1,0,1};
    cout<<A.size()<<endl;
    int x=0,y=0,z=0;
   for(int i=0;i<A.size();i++){
       if(A[i]==0) x++;
       else if(A[i]==1) y++;
       else z++;
   }
    for(int i=0;i<x;i++){
        A[i]=0;
    }
    for(int i=x;i<x+y;i++){
        A[i]=1;
    }
    for(int i=x+y;i<x+y+z;i++){
        A[i]=2;
    }
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
  cout<<endl<<A.size();


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

