def insertion_sort(arr):
    count = 0  
    for x in range(1, len(arr)):
        element = arr[x]
        y = x - 1
        while y >= 0 and element < arr[y]:
            arr[y + 1] = arr[y]
            y -= 1
            count += 1 
        arr[y + 1] = element

    return count 

arr = [2,6,4,8,63,1,5,7,64,9]
count = insertion_sort(arr)
count +=4
print("Sorted list:", arr)
print("Total number of operations:", count)
