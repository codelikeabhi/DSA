'''Create a pattern like this

       *
     ***
   *****
  *******
*********

'''

row = int(input("Enter the no. of rows: "))

for i in range (row):
    for j in range (row - i -1):
        print(" ", end='')
        
    for k in range(2 * i +1):
        print("*", end='')
        
    print("\n")