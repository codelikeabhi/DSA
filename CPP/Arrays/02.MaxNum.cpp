#include <iostream>
#include <limits.h>
using namespace std;

int maxNumber(int myArr[], int size){

    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (myArr[i] > maxi){
            maxi = myArr[i];
        }
    }
    return maxi;
}

int main(){

    int arr[10] = {3, 6, 4, 9, 11, 13, 76, 12, 21, 56};
    
    int size = 10;
    
    cout<<"Maximum Number is "<<maxNumber (arr, size);
    return 0;
}