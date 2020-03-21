#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{ 1, -4, 0, 0, 5, -5, 1, 0, -2, 4, -4, 1, -1, -4, 3, 4, -1, -1, -3};
        set<int> s(v.begin(),v.end());
        v.assign(s.begin(),s.end());
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<"\nNew Size="<<v.size();
        return 0;
}