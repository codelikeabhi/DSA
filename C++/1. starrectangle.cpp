// Cretae a Pattern like this 

// *****

// *****

// *****



#include <iostream>
using namespace std;

int  main( ){
    int rowCount, colCount;

    cout<< "Enter number of rows: ";
    cin>> rowCount;

    cout<<"Enter number of cols: ";
    cin>> colCount;

    for (int row =0; row<rowCount; row++){
        for (int col = 0; col< colCount; col++){
            cout<<"* ";
        }
        cout<< "\n";
    }
    return 0;
}