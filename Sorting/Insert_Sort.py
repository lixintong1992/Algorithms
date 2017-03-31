def InsertSort(arr):
    for i in range(1, len(arr)):
        if arr[i] > arr[i - 1]:
            temp = arr[i]
            j = i
            while(arr[j] > arr[j - 1] and j > 0):
                arr[j] = arr[j - 1]
                j -= 1
            arr[j] = temp


arr = [1, -2, 4, 7, 6, 3, 2, 3]
# arr = [3, 2, 3, 4, 6, 7]
InsertSort(arr)
print(arr)
