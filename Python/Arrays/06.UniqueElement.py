import array as arr

def uniqueElement(arr):
    ans = 0

    for i in range (len(arr)):
        ans = ans^arr[i]

    return ans


myArray = arr.array('i', [1, 2, 3, 9, 4, 2, 8, 4, 8, 9, 1])

print("Unique element in this array is ", uniqueElement(myArray))