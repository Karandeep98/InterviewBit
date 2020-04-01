#include <bits/stdc++.h>

using namespace std;
//O(nlogn) approach
/*int check(int n){
    int count=0;
    for(int i=0;i<32;i++){
        if((n>>i)&1) count++;
    }
    return count;
}
int main()
{

   vector<int> v{1,3,5};
   int sum=0;
   for(int i=0;i<v.size();i++){
    for(int j=i+1;j<v.size();j++){
        sum+=2*(check(v[i]^v[j]));
    }

   }
   cout<<sum;
    return 0;
}*/

//O(n) solution actually it is O(32*n) but for larger test cases it is almost equivalent to O(n)
int main(){
      vector<int> v{1,3,5};
    int ans=0;
    for(int i=0;i<32;i++){
            int count=0;
        for(int j=0;j<v.size();j++){
            if((v[j]>>i)&1) count++;
        }
        ans+=count*(v.size()-count)*2;
    }
    cout<<ans;
    return 0;
}
