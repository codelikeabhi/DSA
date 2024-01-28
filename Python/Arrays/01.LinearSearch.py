array = [2, 3, 4, 5, 9, 11, 23, 34, 12]

num = int(input("Enter any number: "))

flag = False;

for i in range (len(array)):
    if array[i] == num:
        flag = True
        break


        

if flag==True:
    print("Item found.")
else:
    print("Item not found.")