#include <iostream>
using namespace std;

void linearSearch(int myArr[], int size, int num){
    bool flag = 0;
    for (int i = 0; i<size; i++){
        if (myArr[i] == num)
        {
            flag = 1;
            break;
        }
        
    }
    
    if (flag ==1) cout<<"Item found in the given Array";
    
    else cout<<"Sorry! Item not found in the given Array";
}

int main(){

    int myArr[11] = {2, 3, 4, 5, 9, 11, 23, 34, 12};
    int size = 9;
    int n;

    cout<<"Enter the number you wanna find in array: ";
    cin>>n;

    linearSearch(myArr, size, n);

    return 0;
}