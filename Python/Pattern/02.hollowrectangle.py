'''Create a program to print this

*****

*     *

*****

'''

row = int(input("Enter No. of Rows:"))
col = int(input("Enter No. of Cols:"))

for i in range (row):
    if (i == 0 or i == row-1):
        for i in range (col):
            print("*", end="")
    else:
        print("*", end= "")
        for i in range (col-2):
            print(" ", end="")
        print("*", end="")
    print("\n")
    