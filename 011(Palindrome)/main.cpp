#include <bits/stdc++.h>
using namespace std;
int isPalindrome(string A) {
    string x;
    
    for(int i=0;i<A.length();i++){
        if(isalnum(A[i])) x+=A[i];
    }
    for(int i=0,j=x.length()-1;i<=j;i++,j--){
        if(tolower(x[i])!=tolower(x[j])){
            return 0;
        }
    }
    return 1;
}

    int main()
    {
        string A;
        cin>>A;
        
    if(isPalindrome(A))
        cout<<"String is palindrome";
        else cout<<"String is not palindrome";
        return 0;
    }
