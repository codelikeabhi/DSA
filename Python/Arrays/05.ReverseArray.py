def revArray(array):
    start = 0
    end = len(array) -1

    while start<=end:
        a = array[start]
        array[start] = array[end]
        array[end] = a

        start += 1
        end -= 1

    for i in range (len(array)):
        print(array[i], end=' ')



arr = [1, 2, 5, 6, 9, 11, 23, 78, 32, 12]

revArray(arr)