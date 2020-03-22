#include <bits/stdc++.h>
using namespace std;
int main()
{
    // O(n) solution when vectors A, B and C are sorted as per question
    vector<int> A{1, 4, 5, 8, 10};
    vector<int> B{6, 9, 15};
    vector<int> C{ 2, 3, 7, 29 };
    int i=A.size()-1,j=B.size()-1,k=C.size()-1,l,m,n;
    int ans= INT_MAX;
   while(i>=0 && j>=0 && k>=0){
       int max1 = max(max(A[i],B[j]),C[k]);
       int min1 = min(min(A[i],B[j]),C[k]);
       if(abs(max1-min1)<ans){
            l=A[i]; m=B[j]; n=C[k];
            }
       ans = min(ans,abs(max1-min1));
       if(A[i]==max1) i--;
       else if(B[j]==max1) j--;
       else k--;
        }
   cout<<"Minimum absolute difference of ("<<l<<","<<m<<","<<n<<") is: "<<ans;

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

