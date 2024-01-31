from array import *

def intersetArray(arr, brr):

    for i in range (len(arr)):
        for j in range (len(brr)):
            if arr[i] == brr[j]:
                print(arr[i], end=' ')
                break


arr1 = array('i', [2, 3, 4, 6, 1, 5, 7])
arr2 = array('i', [3, 6, 5, 4, 3, 0, 1])

intersetArray(arr1, arr2)