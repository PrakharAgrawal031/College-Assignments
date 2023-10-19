arr = [2,6,4,8,63,1,5,7,64,9]
key = 64
position = -1
count = 0
for x in arr:
    count+=1
    if x==key:
        count+=2
        position =  arr.index(x)
        break
count+=1
if position == -1:
    count+=2
    print("element not present in the list")
    print("Number of operations = ",count)
else:
    count+=3 
    print("element is present at ", position,"th index")
    print("Number of operations = ",count)