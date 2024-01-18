''''Cretae  a program to print this pattern

*

**

***

****

*****

'''


row = int(input("Enter No. of Rows:"))

for i in range (row):
    for j in range (i+1):
        print("*", end="")
    print("\n")