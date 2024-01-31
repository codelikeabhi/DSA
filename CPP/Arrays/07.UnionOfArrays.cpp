#include <bits/stdc++.h>
using namespace std;


void uniteArray(vector<int> arr, vector<int> brr){
    vector<int> result;
    
    for (int i = 0; i< arr.size(); i++){
        result.push_back(arr[i]);
    }
    
    for (int i =0; i< brr.size(); i++){
        result.push_back(brr[i]);
    }
    
    cout<<"Resultant array after union is ";
    for(int i = 0; i< result.size(); i++){
        cout<<result[i]<<" ";
    }
}

int main()
{
    vector<int> arr ={1, 2, 4, 3,7};
    vector<int> brr = {8, 5, 6, 9};
    
    
    
    uniteArray(arr, brr);

    return 0;
}
