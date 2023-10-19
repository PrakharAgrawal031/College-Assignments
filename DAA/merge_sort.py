def merge_sort(arr):
    if len(arr) > 1:
        m = len(arr) // 2  
        left = arr[:m] 
        right = arr[m:]
        merge_sort(left)
        merge_sort(right)
        i = j = k = 0
        while i < len(left) and j < len(right):
            if left[i] < right[j]:
                arr[k] = left[i]
                i += 1
            else:
                arr[k] = right[j]
                j += 1
            k += 1
        while i < len(left):
            arr[k] = left[i]
            i += 1
            k += 1
        while j < len(right):
            arr[k] = right[j]
            j += 1
            k += 1

arr = [2,6,4,8,63,1,5,7,64,9]
merge_sort(arr)
print("Sorted list:", arr)