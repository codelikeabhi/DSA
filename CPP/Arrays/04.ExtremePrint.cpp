#include <bits/stdc++.h>
using namespace std;

void extremePrint(int arr[], int size){

    int start = 0;
    int end = size-1;

    while (start<=end){
        if (start == end) cout<<arr[start]<<" ";
        else{
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        }
        start++;
        end--;
        
    }
    
}

int main(){

    int anArray[11] = {2, 11, 23, 12, 7, 9, 19, 21, 22, 87, 17};

    int size = 11;

    extremePrint(anArray, size);

    return 0;
}