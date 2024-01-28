import sys

def maxNum(array):
    maxi = (-sys.maxsize -1)

    for i in range (len(array)):
        if array[i] > maxi:
            maxi = array[i]

    return maxi

arr =  [3, 6, 4, 9, 11, 13, 76, 12, 21, 56]

print("Maximun number found in given array is ", maxNum(arr))

