'''Create this pattern

    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

'''

N = int(input("Enter the n. of rows: "))

for row in range(N):
    for col in range(N-row-1):
        print(" ", end='')
        
    for col in range(row+1):
        print("* ", end='')
        
    print("\n")
    
    
for row in range(N):
    for col in range(row):
        print(" ", end='')
        
    for col in range(N-row):
        print("* ", end='')
        
    print("\n")
    