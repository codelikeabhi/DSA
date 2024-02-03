#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int> > vec;
    
    vector<int> a = {3, 6, 7, 8};
    vector<int> b = {13, 9, 71, 18};
    vector<int> c = {30, 45, 5, 73};
    
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    
    for(int i =0; i< vec.size(); i++){
        for(int j =0; j< vec[i].size(); j++){
            cout<<vec[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    
    return 0;
}
