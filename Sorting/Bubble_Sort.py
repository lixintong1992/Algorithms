def BubbleSort(arr):
    for i in range(len(arr)):
        for j in range(len(arr) - 1, i, -1):
            if arr[j] < arr[j - 1]:
                arr[j], arr[j - 1] = arr[j - 1], arr[j]


arr = [1, -2, 4, 7, 6, 3, 2, 3]
# arr = [3, 2, 3, 4, 6, 7]
BubbleSort(arr)
print(arr)
