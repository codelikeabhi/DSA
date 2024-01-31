#include <bits/stdc++.h>
using namespace std;


void intersectArr(vector<int> arr, vector<int> brr){
    
    for (int i =0; i< arr.size(); i++){
        for (int j = 0; j< brr.size(); j++){
            if (arr[i] == brr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
}


int main()
{
    vector<int> arr = {1, 3, 4, 6, 9, 7};
    vector<int> brr = {3, 5, 6, 4, 2};
    
    intersectArr(arr, brr);

    return 0;
}
