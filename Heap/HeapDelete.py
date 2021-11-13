def Heap(arr, n, i):
    largest = i
    LeftChild = 2 * i + 1
    RightChild = 2 * i + 2

    if LeftChild < n and arr[LeftChild] > arr[largest]:
        largest = LeftChild

    if RightChild < n and arr[RightChild] > arr[largest]:
        largest = RightChild

    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]
        Heap(arr, n, largest)


def deleteRoot(arr, n):
    lastElement = arr[n - 1]
    arr[0] = lastElement
    n = n - 1
    Heap(arr, n, 0)


def printArray(arr, n):
    for i in range(n):
        print(arr[i], end=" ")
    print()


heaparry = [10, 5, 3, 2, 4]
n = len(heaparry)
deleteRoot(heaparry, n)
printArray(heaparry, n)
