#include <bits/stdc++.h>
using namespace std;
    string intToRoman(int num) {
        string s;int x;
        int arr[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string sym[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int index=12;
        while(num>0){
            int x=num/arr[index];
            num%=arr[index];
            while(x--){
                s+=sym[index];
            }
            index--;
        }
        
        return s;
    }
    int main()
    {
        int num;
        cin>>num;
        cout<<intToRoman(num);
    
    
        return 0;
    }
