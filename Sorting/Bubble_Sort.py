def BubbleSort(arr):
    for i in range(len(arr)):
        for j in range(i, len(arr)):
            if arr[i] > arr[j]:
                arr[i], arr[j] = arr[j], arr[i]


arr = [1, -2, 4, 7, 6, 3, 2, 3]
# arr = [3, 2, 3, 4, 6, 7]
BubbleSort(arr)
print(arr)
