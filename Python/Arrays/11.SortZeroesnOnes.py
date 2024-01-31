from array import * 

def sortZeronOne(arr):

    start = 0
    end = len(arr) -1
    i = 0

    while(start <= end):
        if arr[i] == 0:
            a = arr[i]
            arr[i] = arr[start]
            arr[start] = a

            start +=1
            i += 1

        if arr[i] == 1:
            a = arr[i]
            arr[i] = arr[end]
            arr[end] = a

            end -=1


    for i in range(len(arr)):
        print(arr[i], end=' ')

arr = array('i', [0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0])

sortZeronOne(arr)