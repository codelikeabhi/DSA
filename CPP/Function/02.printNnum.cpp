//Write a Function to print Numbers from 1 to N

#include <iostream>

using namespace std;


void printNum(int N){
    for (int i =1; i<=N; i++){
        cout<<i<<endl;
    }
}



int main()
{
    
    int N;
    cout<<"Enter the number: ";
    cin>>N;
    
    
    printNum(N);
    
    return 0;
}