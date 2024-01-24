#Write a Function to Solve Student and Marks Problem

marks = int(input("Enter the marks of students: "))

def findGrades(marks):
    #considering the marks of students is between 0 and 100
    if  marks>=90 and marks<=100:
        return 'A'
    elif marks>=80:
        return 'B'
    elif marks>=70:
        return 'C'
    elif marks>=60:
        return 'D'
    else:
        return 'E'
        
Grade = findGrades(marks)

print("Grade of the student is: ", Grade)