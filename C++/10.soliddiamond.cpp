/*Create this pattern

    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
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
        for (int col =0; col< (N-row-1); col++){
            cout<<" ";
        }
        
        for (int col = 0; col < row +1; col++){
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
    for(int row=0; row<N; row++){
        for (int col =0; col<row; col++){
            cout<<" ";
        }
        
        for(int col = 0; col<N-row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    

    return 0;
}