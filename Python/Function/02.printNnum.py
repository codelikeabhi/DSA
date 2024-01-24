#Write a Function to print Numbers from 1 to N


a = int(input("Enter the number: "))

def printNum(N):
    for i in range(1, N+1):
        print(i)
        
        
printNum(a)