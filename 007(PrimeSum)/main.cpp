#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
   
    if(x==2) return true;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
    return true;
}


vector<int> primesum(int A) {
   
     vector<int> sol;
   
    for(int i=2;i<A;i++){
       if(isPrime(i))  
            if(isPrime(A-i))
            {
                sol.push_back(i);
                sol.push_back(A-i);
                return sol;
            }
        }
    }

int main()
{
    int x;
    vector<int> v;
    cin>>x;
    v=primesum(x);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
 return 0;
}