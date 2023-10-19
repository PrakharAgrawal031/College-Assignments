def bubble_sort(arr):
    n = len(arr)
    for x in range(n):
        swapped = False
        for y in range(0, n - x - 1):
            if arr[y] > arr[y + 1]:
                arr[y], arr[y + 1] = arr[y + 1], arr[y]
                swapped = True
        if not swapped:
            break
   
arr = [2,6,4,8,63,1,5,7,64,9]
bubble_sort(arr)
print("Sorted array:", arr)
