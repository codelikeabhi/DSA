#include <bits/stdc++.h> 
using namespace std;


void tripletSum(vector<int> arr){
    int sum = 10;
    
    for(int i = 0; i< arr.size(); i++){
        for(int j =i+1; j< arr.size(); j++){
            for(int k = j+1; k< arr.size(); k++){
                if(arr[i] + arr[j] + arr[k] == sum){
                    cout<<"Triplt Is: "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    break;
                }
            }
        }
    }
}


int main()
{
    vector<int> arr = {3, 5, 7, 9, 2, 4, 2, 6, 7, 2, 1, 4};
    
    tripletSum(arr);

    return 0;
}
