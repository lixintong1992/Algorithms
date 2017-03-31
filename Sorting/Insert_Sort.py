def InsertSort(arr):
    for i in range(1, len(arr)):
        if arr[i - 1] > arr[i]:
            temp = arr[i]
            j = i
            while(j > 0 and arr[j - 1] > temp):
                arr[j] = arr[j - 1]
                j -= 1
            arr[j] = temp


arr = [1, -2, 4, 7, 6, 3, 2, 3]
# arr = [3, 2, 3, 4, 6, 7]
InsertSort(arr)
print(arr)
