'''Create this pattern

    *
   * *
  *   *
 *     *
*       *
*       *
 *     *
  *   *
   * *
    *
'''



N = int(input("Enter the n. of rows: "))

for row in range(N):
    for col in range(N-row-1):
        print(" ", end='')
    
    print("*", end='')
    
    for col in range(2*row-1):
        print(" ", end='')
    
    if (row != 0):
        print("*", end='')
        
    print("\n")
    
    
for row in range(N-1,-1, -1):
    for col in range(N-row-1):
        print(" ", end='')
        
    print("*", end='')
    
    for col in range(2*row-1):
        print(" ", end='')
    
    if (row != 0):
        print("*", end='')
    print("\n")
    