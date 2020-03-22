#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* O(n^2) solution
    int area=0;
    for(int i=0;i<A.size();i++){
        for(int j=i+1;j<A.size();j++){
            int x= min(A[i],A[j])*(j-i);
            area=max(area,x);
        }
    }
    cout<<area;*/

    // O(n) solution
    vector<int> A{1,8,6,2,5,4,8,3,7};
     int area=0;
    int i=0,j=A.size()-1,k,l;
    while(i<j){
        int x=min(A[i],A[j])*(j-i);
        if(x>area){
                k=A[i];l=A[j];
                area=x;
        }
        if(A[i]<A[j]) i++;
        else j--;
    }
    cout<<"Selected pillars are: "<<k<<" and "<<l<<"\nArea = "<< area;
    return 0;
}


