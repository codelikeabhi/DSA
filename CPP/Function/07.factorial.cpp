//Write a Function to calculate Factorial of any Number

#include <iostream>

using namespace std;

int factorial(int num){
    int fact = 1;
    
    for (int i = 1; i<num+1; i++){
        fact = fact*i;
    }
    
    return fact;
}

int main()
{
    
    float a;
    cout<<"Enter the number: ";
    cin>>a;

    cout<<"Factorial of the number is: "<< factorial(a);
    
    return 0;
}