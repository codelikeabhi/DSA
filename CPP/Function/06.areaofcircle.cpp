//Write a Function to calculate Area of Circle

#include <iostream>

using namespace std;

float areaOfCircle(float rad){
    return (3.14 * (rad * rad));
}

int main()
{
    
    float a;
    cout<<"Enter the radius: ";
    cin>>a;

    cout<<"Area of the Circle is: "<< areaOfCircle(a);
    
    return 0;
}