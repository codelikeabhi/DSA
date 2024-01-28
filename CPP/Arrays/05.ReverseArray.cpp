#include <bits/stdc++.h>
using namespace std;

void revArray(int arr[], int size){

    int start = 0;
    int end = size-1;

    while (start<=end)
    {
        swap(arr[start], arr[end]);
        
        start++;
        end--;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){

    int anArray[10] = {1, 2, 5, 6, 9, 11, 23, 78, 32, 12};

    int size = 10;

    revArray(anArray, size);

    return 0;
}