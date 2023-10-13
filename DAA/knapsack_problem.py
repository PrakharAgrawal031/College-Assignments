elements = ['a', 'b', 'c', 'd']
weight = [30,10,15,20]
profit = [15,25,30,30]
cont_size = 50
container = []
ppw = []
def swap(a,b):
    temp = a
    a = b
    b = temp
for i in range(len(weight)):
    ppw.append(profit[i]/weight[i])
print(ppw)
# zipped = zip(ppw,elements,weight,profit)
# for i in range(len(ppw)-1):
#     zipped.sort()
# print(zipped)

#sorting elements into a new list
sorted_elements = sorted(zip(ppw, weight, profit, elements), reverse=True)
new_list  = []

for x in sorted_elements:
    new_list.append(list(x))

for x in new_list:
    if cont_size > x[1]:
        container.append(x)
        cont_size = cont_size - x[1]
    elif cont_size < x[1]:
        x[1] = cont_size
        x[2] = x[1]*x[0]
        cont_size = 0
        container.append(x)
        
print(container)
net_profit = 0
for x in container:
    print(x[3], "  ",x[1],"  ", x[2] )
    net_profit+=x[2]
print("\nNet profit = ", net_profit)
