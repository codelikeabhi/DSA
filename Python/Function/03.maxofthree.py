#Write a Function to Find max of 3 values

a = int(input("Enter the number: "))
b = int(input("Enter the number: "))
c = int(input("Enter the number: "))

def findMax(num1, num2, num3):
    if num1>num2 and num1>num3:
        return num1
        
    elif num2>num1 and num2>num3:
        return num2
        
    else:
        return num3
        
maxNum = findMax(a, b, c)

print("Maximun of these three is", maxNum)