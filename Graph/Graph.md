#### BFS


```
def bfs(graph, root):
    visited = [root]
    queue = [root]
    
    while queue:
        node = queue.pop(0)
        print(node)
        for neighbor in graph[node]:
            if neighbor not in visited:
                visited.append(neighbor)
                queue.append(neighbor)
```

#### DFS

```
def dfs(graph, root):
    visited = [root]
    stack = [root]

    while stack:
        node = stack.pop()
        print(node)
        for neighbor in graph[node]:
            if neighbor not in visited:
                visited.append(neighbor)
                stack.append(neighbor)
```