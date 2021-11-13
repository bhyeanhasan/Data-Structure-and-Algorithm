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
    arr[0], arr[n - 1] = arr[n - 1], arr[0]
    n = n - 1
    Heap(arr, n, 0)


def printArray(arr, n):
    for i in range(n):
        print(arr[i], end=" ")
    print()


heaparry = [500, 10, 5, 3, 2, 4, 100]
n = len(heaparry)
count = n

while count > 0:
    deleteRoot(heaparry, count)
    count -= 1

printArray(heaparry, n)
