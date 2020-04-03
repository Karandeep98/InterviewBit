#include <bits/stdc++.h>

using namespace std;
string simplifyPath(string A) {
    stack<string> s;
    string x;
    for(int i=0;i<A.length();i++){
        if(A[i]=='/' && i!=A.length()-1) {
                x="";
                int j=i+1;
            while(j!=A.length()&&A[j]!='/' ){
                x+=A[j];
                j++;
            }
            if(x==".."&&!s.empty()) s.pop();
            else if(x!="."&&x!=".."&&x!="") s.push(x);
        }
    }
    if(s.empty()) x="/";
    else x="";
    stack<string> s2;
    while(!s.empty()){
        s2.push(s.top());
        s.pop();
    }
     while(!s2.empty()){
        x+="/";
        x+=s2.top();
        s2.pop();
    }

    return x;

}

int main()
{
    string x="/a/b/././../../c/d";

    cout<<simplifyPath(x);

    return 0;
}
