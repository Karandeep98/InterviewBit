#include <bits/stdc++.h>

using namespace std;
//O(n^2) approach
int largestRectangleArea(vector<int> &A) {
    int area=0;
    for(int i=0;i<A.size();i++){

        for(int j=i;j<A.size();j++){
            int x= *min_element(A.begin()+i,A.begin()+j+1) * (j-i+1);

            area = max(area,x);
        }
    }
    return area;
}
int main()
{
    vector<int> a{2, 1, 5, 6, 2, 3};
  cout<<"Largest area = "<<largestRectangleArea(a);
    return 0;
}
