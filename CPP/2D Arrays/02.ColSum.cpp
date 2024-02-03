#include <bits/stdc++.h>
using namespace std;


void colSum (int arr[][4], int row, int col){

    
    for (int i =0; i< col; i++){
        int sum = 0;
        for (int j =0; j< row; j++){
            sum+=arr[j][i];
        }
        cout<<sum<<" ";
    }
}



int main()
{
    int arr[3][4] = {
    {2, 3, 4, 6}, 
    {3, 5, 8, 7}, 
    {6, 8, 9, 1}};
    
    colSum(arr, 3, 4);
    
    
    return 0;
}
