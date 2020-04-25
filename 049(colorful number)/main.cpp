#include <iostream>

using namespace std;

int main()
{
    int n=1234,rem=0,rev=0;
    while(n>0){
        rem=n%10;
        n/=10;
        rev=rev*10+rem;
    }
    cout<<rev;
    return 0;
}
