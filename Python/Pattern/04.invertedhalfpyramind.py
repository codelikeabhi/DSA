''''Create a Pattern like this

******

*****

****

***

**

*

'''

row = int(input("Enter No. of Rows:"))

for i in range (row, -1, -1):
    for j in range (i+1):
        print("*", end="")
    print("\n")