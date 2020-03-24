#include <bits/stdc++.h>
using namespace std;
bool valid(string a){
        int x=stoi(a);

        if(a[0]=='0' && a.length()>1) return false;
        if(x>=0 && x<=255) return true;
        return false;
    }
    vector<string> restoreIpAddresses(string A) {

    vector<string> ans;
    if(A.length()<4 ||A.length()>12) return ans;
    for(int i=1;i<4;i++){
        string s1=A.substr(0,i);
        if(!valid(s1)) continue;
        else{
            for(int j=1;i+j<A.length() &&j<4;j++){
                string s2=A.substr(i,j);
                if(!valid(s2)) continue;
                    else{
                        for(int k=1;i+j+k<A.length() && k<4;k++){
                            string s3=A.substr(i+j,k);
                            string s4=A.substr(i+j+k);
                                if(valid(s3)&& valid(s4)) {
                                    string s=s1+"."+s2+"."+s3+"."+s4;
                                    ans.push_back(s);
                                }
                        }
                    }
            }

        }
    }
    return ans;
}
int main()
{

        string s;
        vector<string> a;

        cout<<"Enter String:";
        cin>>s;
        a=restoreIpAddresses(s);
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<endl;
        }
        if(a.size()==0) cout<<"Invalid string";

   return 0;
}


