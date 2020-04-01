#include <iostream>

using namespace std;
//O(1) solution
int numSetBits(unsigned int A) {
    int count=0;
    for(int i=0;i<32;i++){
        if((A>>i)&1) count++;
    }
    return count;
    }

int main()
{
    int n;
    cout << "Enter a number:" ;
    cin>>n;
    cout<<"The number of 1 bits present in "<<n<<" = "<<numSetBits(n);
    return 0;
}
