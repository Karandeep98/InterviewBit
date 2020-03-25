#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string a,int n){
    int i=0,j=n-1;
    while(i<j){
        if(a[i]!=a[j]) return false;
        i++;j--;
    }
    return true;
}

int solve(string A) {
    int x=0;
    int n=A.length();
    while(true){
        if(!isPalindrome(A,n)){
            n--;x++;
        }
        else return x;
    }
}


int main()
{
    /* Solution approach =>
     Naive approach: Start checking the string each time if it is a palindrome and if not,
     then delete the last character and check again. When the string gets reduced to whether
     a palindrome or empty then the number of characters deleted from the end till now will
     be the answer as those characters could have been inserted at the beginning of the 	original string in the order which will will make the string a palindrome.*/

   string s;
   cout<<"Enter string: ";
   cin>>s;
   cout<<"No. of characters to be inserted in front to make it a palindromic string = "<<solve(s);
   return 0;
}


