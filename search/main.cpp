#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="1000";
   /* s+=to_string(1);
     s+=to_string(2);
     cout<<s;*/
     reverse(s.begin(),s.end());
     cout<<s;
    int x=stoi(s);

    cout<<x;
    return 0;
}


