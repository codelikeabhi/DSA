//Write a Function to add all the even number from 1 to N

#include <iostream>

using namespace std;

int totalSum(int num){
    int sum = 0;
    
    for (int i =2; i < num; i=i+2){
        sum = sum+i;
    }
    
    return sum;
}

int main()
{
    
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int result = totalSum(a);
    cout<<"Sum of all the even number is: "<< result ;
    
    return 0;
}