from array import * 

def pairSum(arr, brr):
    sum = 12

    for i in range (len(arr)):
        for j in range (len(brr)):
            if arr[i] + brr[j] == sum:
                print("Pair is ", arr[i], " ", brr[j])
                break

arr1 = array('i', [2, 3, 6, 8, 1, 9, 3])
arr2 = array('i', [4, 6, 9, 3, 2, 1, 7])

pairSum(arr1, arr2)