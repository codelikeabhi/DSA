//Write a Function to Solve Student and Marks Problem

#include <iostream>

using namespace std;


char findGrades(int marks){
    //considering the marks of student lies between 0 and 100
    
    switch (marks/10){
        case 10: 
        case 9: return 'A'; break;
        case 8: return 'B'; break;
        case 7: return 'C'; break;
        case 6: return 'D'; break;
        default: return 'E'; break;
    }
}

int main()
{
    
    int a;
    cout<<"Enter the Marks: ";
    cin>>a;
    

    cout<<"Grade of this student is: "<< findGrades(a);
    
    return 0;
}