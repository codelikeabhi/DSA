//Write a Function to add two Numbers

#include <iostream>

using namespace std;


int getSum(int num1, int num2){
    return num1+num2;
}



int main()
{
    
    int a;
    cout<<"Enter first number: ";
    cin>>a;
    
    int b;
    cout<<"Enter second number: ";
    cin>>b;
    
    
    int sum = getSum(a, b);
    
    cout<<"Sum is: "<<sum;
    return 0;
}