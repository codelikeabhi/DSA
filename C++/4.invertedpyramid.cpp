#include <iostream>
using namespace std;

int main( ){
    int rowCount;
    cout << "Enter the number of rows: ";
    cin >> rowCount;

    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < rowCount-row; col++){
           cout<< "* " ;
        }
        cout<<"\n";
    }

    return 0;
    
}