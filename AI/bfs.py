graph = {
    '5' : ['3' ,'7'],
    '3' : ['2', '4'],
    '7' : ['8'],
    '2' : [],
    '4' : ['8'],
    '8' : []
}

v_nodes = []
queue = []

def bfs(v_nodes, graph, node):
    v_nodes.append(node)
    queue.append(node)
    
    while queue:
        m = queue.pop(0)
        print(m, end = " ")
        
        for x in graph[m]:
            if x not in v_nodes:
                v_nodes.append(x)
                queue.append(x)

bfs(v_nodes, graph, '4')