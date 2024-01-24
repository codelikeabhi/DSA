'''Create a Pattern like this
1

12

123

1234

12345
'''

row = int(input("Enter No. of Rows:"))

for i in range (row):
    for j in range(i+1):
        print (j+1, end='')
    print("\n")
