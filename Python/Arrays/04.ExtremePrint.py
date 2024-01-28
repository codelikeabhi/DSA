def extremePrint(array):
    start = 0
    end = len(array) -1

    while start<=end:
        if start == end:
            print(array[start], end=' ')

        else:
            print(arr[start], end=' ')
            print(arr[end], end=' ')

        start +=1
        end -=1


arr = [2, 11, 23, 12, 7, 9, 19, 21, 22, 87, 17]

extremePrint(arr)