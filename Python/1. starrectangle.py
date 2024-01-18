'''Cretae a Pattern like this 

*****

*****

*****
'''


row = int(input("Enter No. of Rows: "))
col = int(input("Enter No. of Cols: "))

for i in range (0, row):
    for j in range(0, col):
        print("*",end="")
    print("\n")


