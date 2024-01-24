#Write a Function to calculate Area of Circle

N = int(input("Enter the radius of Circle: "))

def areaofCircle(rad):
    return (3.14 * (rad*rad))
        
result = areaofCircle(N)

print("Area of triangle is: ", result)