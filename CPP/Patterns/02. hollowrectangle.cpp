/* Create a program to print this

*****

*   *

*****
*/


#include <iostream>
using namespace std;

int main( ){
    int rowCount, colCount;

    cout<<"Enter No. of rows: ";
    cin>> rowCount;

    cout<< "Enter No. of cols: ";
    cin>> colCount;

    for (int row = 0; row < rowCount ; row++){
        if (row ==0 || row == rowCount - 1){
            for (int  i = 0; i < colCount; i++){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for (int  i = 0; i < colCount-2; i++)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<< "\n";
    }

    return 0;
}