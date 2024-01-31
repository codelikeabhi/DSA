from array import * 

def pairSum(arr, brr, crr):
    sum = 12

    for i in range (len(arr)):
        for j in range (len(brr)):
            for k in range (len(crr)):
                if arr[i] + brr[j] + crr[k]== sum:
                    print("Triplet is ", arr[i], " ", brr[j], " ", crr[k])
                    break

arr1 = array('i', [2, 3, 6, 8, 1, 9, 3])
arr2 = array('i', [4, 6, 9, 3, 2, 1, 7])
arr3 = array('i', [1, 3, 9, 7, 0, 1, 6])


pairSum(arr1, arr2, arr3)