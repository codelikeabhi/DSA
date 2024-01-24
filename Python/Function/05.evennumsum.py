#Write a Function to add all the even number from 1 to N

N = int(input("Enter any number: "))

def totalSum(num):
    sum = 0
    
    for i in range(2, num, 2):
        sum += i
    
    return sum
        
result = totalSum(N)

print("Sum of all the even numbers is: ", result)