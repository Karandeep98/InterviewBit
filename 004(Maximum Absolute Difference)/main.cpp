#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> A{2,2,2};
    int n=A.size(),x=0;
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            x=abs(A[i]-A[j])+abs((i+1)-(j+1));
            if(x>max)
                max=x;
        }
        cout<<endl;
    }
    cout<<max;
    return 0;
}
