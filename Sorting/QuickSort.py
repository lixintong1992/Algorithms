def quickSort(arr, left, right):
    if(left < right):
        print(arr)
        i, j = left, right
        if len(arr) <= 1:
            return
        flag = arr[left]

        while(left < right):
            while(left < right and arr[right] >= flag):
                right -= 1
            if(left < right):
                arr[left] = arr[right]
                left += 1
            while(left < right and arr[left] < flag):
                left += 1
            if(left < right):
                arr[right] = arr[left]
                right -= 1
        arr[right] = flag
        print(left, right, arr)
        quickSort(arr, i, right - 1)
        quickSort(arr, right + 1, j)


arr = [1, -2, 4, 7, 6, 3, 2, 3]
# arr = [3, 2, 3, 4, 6, 7]
quickSort(arr, 0, len(arr) - 1)
print(arr)
