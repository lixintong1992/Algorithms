def ShellSort(arr):
    group = len(arr) // 2
    while group >= 1:
        for i in range(group, len(arr)):
            for j in range(i - group, -1, -group):
                if arr[j] > arr[j + group]:
                    temp = arr[j]
                    arr[j] = arr[j + group]
                    arr[j + group] = temp
        group = group // 2


arr = [1, -2, 4, 7, 6, 3, 2, 3]
# arr = [3, 2, 3, 4, 6, 7]
ShellSort(arr)
print(arr)
