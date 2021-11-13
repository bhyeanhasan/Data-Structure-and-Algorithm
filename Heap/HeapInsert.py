def Heap(arr, n, i):
    parent = int((i-1)/2)

    if arr[parent]< arr[i]:
        arr[i], arr[parent] = arr[parent], arr[i]
        Heap(arr, n, parent)


def printArray(arr, n):
    for i in range(n):
        print(arr[i], end=" ")
    print()


heaparry = [10, 5, 3, 2, 4]
n = len(heaparry)
printArray(heaparry, n)

heaparry= [10, 5, 3, 2, 4, 1000]
n = len(heaparry)
printArray(heaparry, n)


Heap(heaparry,n,n-1)

printArray(heaparry, n)
