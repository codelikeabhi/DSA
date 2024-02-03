#include <bits/stdc++.h>
using namespace std;


void findKey (int arr[][4], int row, int col, int key){
    bool flag = false;
    
    for (int i =0; i< row; i++){
        for (int j =0; j< col; j++){
            if (arr[i][j] == key){
                flag = true;
                break;
            }
        }
    }
    
    if(flag){
        cout<<"Number Found.";
    }
    else{
        cout<<"Number not found.";
    }
}



int main()
{
    int arr[3][4] = {
    {2, 3, 4, 6}, 
    {3, 5, 8, 7}, 
    {6, 8, 9, 1}};
    
    int key; 
    cout<<"Enter the number you want to find: ";
    cin>>key;
    
    findKey(arr, 3, 4, key);
    
    
    return 0;
}
