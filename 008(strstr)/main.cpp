#include <bits/stdc++.h>
using namespace std;

int strStr(const string A, const string B) {
    if(A.length()<B.length()) return -1;
    for(int j=0;j<B.length();j++){
       
        for(int i=0;i<=(A.length()-B.length());i++){
                int a=j,b=i,x=B.length();
                while(B[a]==A[b]){
                    x--;
                    if(x==0) return i;
                    a++;b++;
                }
        }
    }
    return -1;
}


int main()
{
    string a,b;
    cout<<"Enter Main String:";
    cin>>a;
    cout<<"Enter Substring:";
    cin>>b;
    if(strStr(a,b)==-1) cout<<"Substring is not present in main string!!";
    else cout<<"Substring found at index: "<<strStr(a,b);
   
 return 0;
}