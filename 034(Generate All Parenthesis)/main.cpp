#include <bits/stdc++.h>

using namespace std;
void showstack(stack<char> s){
    while (!s.empty())
    {
        cout << s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int check(string A){
    stack<int> s;
    for(int i=0;i<A.length();i++){
       switch(A[i]){
           case '{': s.push(0);break;
           case '[': s.push(1);break;
           case '(': s.push(2);break;
           case '}':{
               if(!s.empty() &&s.top()==0) {
                   s.pop();
                   break;
               }
               else return 0;
           }
           case ']': {

               if(!s.empty() &&s.top()==1) {
                   s.pop();
                   break;
               }
               else return 0;
           }
           case ')':{
                if(!s.empty() &&s.top()==2) {
                   s.pop();
                   break;
               }
               else return 0;
           };

       }
    }
    if(s.empty()) return 1;
    else return 0;
}
int main()
{
    string s="[(])";
    cout<<check(s);

    return 0;
}
