#include <bits/stdc++.h>
using namespace std;
int main()
{
    //O(n) solution
    string A="   jhbs fkjnsdf sfkjsnf msnj   ";
    int n=A.length();
    int len=0;
    bool flag= false;
    for(int i=n-1;i>=0;i--){
        if(A[i]!=' ') flag=true;
        if(flag){
            if(A[i] == ' ' ) break;
            else len++;
        }

    }
    cout<<"Length of last word = "<<len;

   return 0;
}


