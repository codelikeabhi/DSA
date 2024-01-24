#Write a Function to calculate Factorial of any Number

N = int(input("Enter any number: "))

def factorial(num):
    fact = 1
    
    for i in range(1,num+1):
        fact = fact*i
        
    return fact
    
    
result = factorial(N)

print("Factorial of given number is: ", result)