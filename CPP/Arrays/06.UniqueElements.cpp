#include <bits/stdc++.h>
using namespace std;


int findUnique(vector<int> arr){
    
    int a = 0;
    
    for (int i = 0; i < arr.size(); i++){
        a = a ^ arr[i];
    }
    
    return a;
}

int main()
{
    vector<int> arr = {1, 2, 4, 3, 2, 7, 4, 1, 7};
    
    
    
    cout<<"Unique Element in the array is "<<findUnique(arr)<<endl;

    return 0;
}
