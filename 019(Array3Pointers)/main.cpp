#include <bits/stdc++.h>
using namespace std;
int main()
{
    // O(n) solution when vectors A, B and C are sorted as per question
    // This question is repeated and is also present with the name "Minimum absolute difference"
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