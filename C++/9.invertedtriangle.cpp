/*Create this pattern

* * * * * * 
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 

*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"Enter no. of rows: ";
    cin>>N;
    
    for (int i = 0; i<N; i++){
        for (int j = 0; j < i; j++){
            cout<<" ";
        }
        
        for (int j = 0; j <N-i; j++){
            cout<<"* ";
        }
        
        cout<<endl;
    }
    

    return 0;
}