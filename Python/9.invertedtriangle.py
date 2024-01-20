'''Create this pattern

* * * * * * 
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 
'''

row = int(input("Enter the no. of rows: "))

for i in range(row):
    for j in range(i):
        print(" ", end='')
    for j in range(row-i):
        print("* ", end='')
    print("\n")