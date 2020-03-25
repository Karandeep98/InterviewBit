#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    char x=tolower(c);
    if(x=='a'|| x=='e' || x=='i' ||x=='o'|| x=='u') return true;
    else return false;
}

int solve(string A) {
    int l=0;
    for(int i=0;i<A.length();i++){
        if(isVowel(A[i])) l += A.length()-i;
    }
    return l%10003;
}

int main()
{
   string s;
   cout<<"Enter string: ";
   cin>>s;
   cout<<"No. of amazing subarrays = "<<solve(s);
   return 0;
}


