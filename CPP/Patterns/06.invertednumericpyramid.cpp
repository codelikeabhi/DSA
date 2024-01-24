#include <bits/stdc++.h>
using namespace std;

int main( ) {
    int rowCount;
    cout<< "Enter No. of Rows: ";
    cin>> rowCount;

    for (int row = 0; row < rowCount; row++){

        for (int col = 0; col < rowCount - row - 1; col++){
            cout<<" ";
        }
        
        for (int col = 0; col < row+1 ; col++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    return 0;
}