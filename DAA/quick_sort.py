def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[0]
    left = [x for x in arr[1:] if x < pivot]
    right = [y for y in arr[1:] if y >= pivot]
    return quick_sort(left) + [pivot] + quick_sort(right)

arr = [2,6,4,8,63,1,5,7,64,9]
new_arr = quick_sort(arr)
print("Sorted list:", new_arr)
