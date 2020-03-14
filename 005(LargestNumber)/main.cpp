
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> A{98,1,474,1,2,8,96,5,4,1};
    vector<int>v(A.size());
    for(int i=0;i<A.size();i++){
        v[i]=A[i];
    }
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            string a=to_string(v[j]);
           string b=to_string(v[j+1]);
            string s=a+b;
            string s2=b+a;
         double in=stod(s);
         double in2=stod(s2);
          
            if(in>in2) 
            swap(v[j],v[j+1]);
           
                }
           }
           string x;
           for(int i=n-1;i>=0;i--)
           x+=to_string(v[i]);
           if(x[0]=='0') cout<<0;
           else cout<<x;
    return 0;
}
