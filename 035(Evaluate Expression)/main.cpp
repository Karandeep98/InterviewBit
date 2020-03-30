#include <bits/stdc++.h>

using namespace std;
// Evaluating Reverse Polish Notation (or) Evaluating Postfix notation
int evalRPN(vector<string> &A) {
    stack<int> s;
    int x,y,z;
    for(int i=0;i<A.size();i++){

            if(A[i]=="+"){
                 x=s.top(); s.pop();
                y=s.top();s.pop();
                z=y+x;
                s.push(z);
            }
            else if(A[i]=="-"){
                 x=s.top(); s.pop();
                y=s.top();s.pop();
                z=y-x;
                s.push(z);
            }
             else if(A[i]=="/"){
                 x=s.top(); s.pop();
                y=s.top();s.pop();
                z=y/x;
                s.push(z);
            }
             else if(A[i]=="*"){
                 x=s.top(); s.pop();
                y=s.top();s.pop();
                z=y*x;
                s.push(z);
            }
             else  s.push(stoi(A[i]));
        }
    return s.top();
}

int main()
{
    vector<string> a{"2", "1", "+", "3", "*"};
    cout<<evalRPN(a);
    vector<string> b{"4", "13", "5", "/", "+"};
     cout<<endl<<evalRPN(b);
    return 0;
}
