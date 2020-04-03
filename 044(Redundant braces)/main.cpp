#include <bits/stdc++.h>

using namespace std;
int braces(string A){
stack<int> s;
   for(int i=0;i<A.length();i++){
    if(A[i]=='('||A[i]=='+'||A[i]=='-'||A[i]=='*'||A[i]=='/') s.push(A[i]);
    else if(A[i]==')') {

            if(s.top()=='(') return 1;
            else {
                while(s.top()!='('){
                    s.pop();
                }
                    s.pop();
            }
   }
}
 return 0;
}
int main()
{
   string A="(a+(a+b))";
   string B="((a+b))";
   if(braces(A)==0) cout<<A<<" doesn't have any redundant parenthesis!\n";
    else cout<<A<<" have redundant parenthesis!\n";

   if(braces(B)==0) cout<<B<<" doesn't have any redundant parenthesis!\n";
    else cout<<B<<" have redundant parenthesis!\n";

}
