#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> A{1,2,3,10};
    vector<int> B{4,5,6,11};
    int n=A.size();
    int m=B.size();
    vector<int> c(n+m);
    int k=0,i=0,j=0;

    while(k<=(n+m)/2){

        if(i>=n){
            c[k++]=B[j++];
        }
        else if(j>=m){
            c[k++]=A[i++];
        }
        else{
            if(A[i]<B[j]){
                c[k++]=A[i++];
            }
            else {
                c[k++]=B[j++];
            }
        }
    }

    int mid=(n+m)/2;
    if((n+m)%2==0){
        double median=(c[k-1]+c[k-2])/2.0;
        cout<<"Median= "<<median;
    }
    else   cout<<"Median= "<<c[k-1];
return 0;
}