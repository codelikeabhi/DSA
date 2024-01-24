/*Create this pattern

    *
   * *
  *   *
 *     *
*       *
*       *
 *     *
  *   *
   * *
    *

*/

#include <iostream>

using namespace std;

int main()
{
    int N;
    cout<<"Enter No. of Rows:";
    cin>>N;
    
    for (int row = 0; row<N; row++){
        for (int col = 0; col< (N-row)-1; col++){
            cout<<" ";
        }
        cout<<"*";
        for (int col = 0; col < ((2*row) -1); col++){
            cout<<" ";
        }
        if (row != 0){
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    for (int row = N-1; row >=0; row--){
        for (int col = 0; col <N-row-1; col++){
            cout<<" ";
        }
           
        if (row !=0){
            cout<<"*";
        }
        
        for (int col = 0;  col< 2*row-1;col++){
            cout<<" ";
        }
        cout<<"*";
        
        cout<<endl;
    }
    return 0;
}