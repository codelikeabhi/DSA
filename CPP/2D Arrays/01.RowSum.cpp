#include <bits/stdc++.h>
using namespace std;


void rowSum (int arr[][4], int row, int col){
    
    
    for (int i =0; i< row; i++){
        int sum = 0;
        for (int j =0; j< col; j++){
            sum+=arr[i][j];
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
    
    rowSum(arr, 3, 4);
    
    
    return 0;
}
