//Write a Function to Find max of 3 values

#include <iostream>

using namespace std;


int findMax(int num1, int num2, int num3){
    
    if (num1>num2 && num1>num3){
        return num1;
    }
    
    else if (num2> num3 && num2 > num1){
        return num2;
    }
    
    else{
        return num3;
    }
}



int main()
{
    
    int a,b,c;
    cout<<"Enter the numbers: ";
    cin>>a>>b>>c;
    

    cout<<"Maximum of these three is: "<< findMax(a,b,c);
    
    return 0;
}