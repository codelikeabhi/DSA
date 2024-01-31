#include <bits/stdc++.h> 
using namespace std;


void pairSum(vector<int> arr, vector<int> brr){
    int val = 12;
    
    for (int i =0; i< arr.size(); i++){
        for (int j = 0; j< brr.size(); j++){
            if (arr[i] + brr[j] == val){
                cout<<"Pair is "<<arr[i]<<", "<<brr[j]<<endl;
            }
        }
    }
}


int main()
{
    vector<int> arr = {1, 3, 4, 6, 9, 7};
    vector<int> brr = {3, 5, 6, 4, 2};
    
    pairSum(arr, brr);

    return 0;
}
