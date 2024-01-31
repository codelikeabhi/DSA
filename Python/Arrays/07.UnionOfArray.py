from array import *

def uniteArray(arr, brr):
    finalArr = array('i', [])
    
    for i in range(len(arr)):
        finalArr.append(arr[i])

    for i in range(len(brr)):
        finalArr.append(brr[i])

    for i in range (len(finalArr)):
        print(finalArr[i], end=' ')


arr1 = array('i', [2, 3, 4, 6, 7,])
arr2 = array('i', [1, 5, 8, 9])

uniteArray(arr1, arr2)