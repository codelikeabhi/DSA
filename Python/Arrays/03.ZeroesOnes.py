def zeroOne (array):
    zeroCount = 0
    oneCount = 0

    for i in range (len(array)):
        if array[i] == 0:
            zeroCount +=1

        if array[i] == 1:
            oneCount +=1

    print("Total number of Zero in array is ", zeroCount)
    print("Total number of One in array is ", oneCount)


arr = [0, 1, 1, 0, 1, 0, 1, 1, 0, 2]

zeroOne(arr)