from queue import PriorityQueue
v = 14
graph = [[] for i in range(v)]

def best_fs(target, source, n):
    vis = [False] * n
    pq = PriorityQueue()
    pq.put((0, source))
    vis[source] = True
    
    while pq.empty() == False:
        u=pq.get()[1]
        print(u, end=' ')
        if u == target:
            break
        for v, c in graph[u]:
            if vis[v] == False:
                vis[v] = True
                pq.put((c,v))
        print()
        
def addedge(x, y, cost):
    graph[x].append((y,cost))
    graph[y].append((x,cost))
    
addedge(0,1,10)
addedge(0,2,9)
addedge(1,3,7)
addedge(1,8,4)
addedge(2,9,12)
addedge(2,5,6)
addedge(3,8,9)
addedge(8,9,12)
addedge(9,8,11)

source = 0
target = 8
best_fs(target, source, v)
