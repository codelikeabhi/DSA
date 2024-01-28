#include <bits/stdc++.h>
using namespace std;

void zeroOne(int arr[], int size){

    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i<size; i++){
        if (arr[i] == 0) zeroCount++;
        if (arr[i] == 1) oneCount++;
    }

    cout<<"Total Number of Zero is " <<zeroCount<<endl;
    cout<<"Total Number of One is " <<oneCount<<endl;    
}

int main(){

    int myArr[10] = {0, 1, 1, 0, 1, 0, 1, 1, 0, 2};

    int size = 10;

    zeroOne(myArr, size);

    return 0;
}