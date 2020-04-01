#include <bits/stdc++.h>

using namespace std;

unsigned int reverse(unsigned int A) {
    int ans=0;
    for(int i=0;i<32;i++){
        if((A>>i)&1) ans+=pow(2,31-i);
    }
    return ans;
    }

int main()
{
    int a=3;
    cout<<reverse(a);
    return 0;
}
