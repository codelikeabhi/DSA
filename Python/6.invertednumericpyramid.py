'''Create a pattern like this
12345

1234

123

12

1
'''

row = int(input("Enter No. of Rows:"))

for i in range (row-1, -1, -1):
    for j in range(i+1):
        print (j+1, end='')
    print("\n")
