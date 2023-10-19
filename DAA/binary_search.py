def binary_search(arr, key, x):
    l = 0
    h = len(arr) - 1
    m = 0
    x+=4
    while l <= h:
        m = (h + l) // 2
        x+=3
        if arr[m] < key:
            x+=1
            l = m + 1
        elif arr[m] > key:
            x+=2
            h = m - 1
        else:
            x+=2
            print("Number of operations = ", x)
            return m
    return -1
 

arr = [3,5,9,12,18,26]
key = 18
x = 1

position = binary_search(arr, key, x)

if position == -1:
    x+=2
    print("element not present in the list")

else:
    x+=3 
    print("element is present at ", position,"th index")


