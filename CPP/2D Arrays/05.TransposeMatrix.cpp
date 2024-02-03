#include <bits/stdc++.h>
using namespace std;


void transposeMatrix(int arr[][4], int row, int col, int transpose[][3]){
    
    
    cout<<"Printing Actual Matrix."<<endl;
    
    for(int i = 0; i< row; i++){
        for(int j = 0; j <col; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    for (int i =0; i< col; i++){
        for (int j =0; j< row; j++){
            transpose[i][j] = arr[j][i];
        }
    }
    cout<<endl;
    
    cout<<"Printing transposed Matrix"<<endl;
    for (int i =0; i< col; i++){
        for (int j =0; j< row; j++){
            cout<<transpose[i][j]<<"\t";
        }
        cout<<endl;
    }
    
}



int main()
{
    int arr[3][4] = {
    {2, 83, 14, 6}, 
    {53, 5, 18, 7}, 
    {6, 8, 29, 11}};
    
    int brr[4][3];
    
    transposeMatrix(arr, 3, 4, brr);
    
    
    return 0;
}
