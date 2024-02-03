#include <bits/stdc++.h>
using namespace std;


int getMax(int arr[][4], int row, int col){
    int maxi = INT_MIN;
    
    for (int i =0; i< row; i++){
        for (int j =0; j< col; j++){
            if (arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }
    
    return maxi;
    
}


int getMin(int arr[][4], int row, int col){
    int mini = INT_MAX;
    
    for (int i =0; i< row; i++){
        for (int j =0; j< col; j++){
            if (arr[i][j] < mini){
                mini = arr[i][j];
            }
        }
    }
    
    return mini;
    
}



int main()
{
    int arr[3][4] = {
    {2, 83, 14, 6}, 
    {53, 5, 18, 7}, 
    {6, 8, 29, 11}};
    
    
    cout<<"Maximum Number in the array is "<<getMax(arr, 3, 4)<<endl;
    cout<<"Minimum Number in the array is "<<getMin(arr, 3, 4);
    
    
    return 0;
}
