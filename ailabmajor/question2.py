from collections import defaultdict

def iddfs(start, goal, max_depth, graph):
    for depth in range(max_depth):   
        visited = set()
        path = []
        if dfs(start, goal, visited, depth, path, graph):
            path.append(start)
            return list(reversed(path))
    return None

def dfs(node, goal, visited, depth, path, graph):
    visited.add(node)
    path.append(node)
    if node == goal:
        return True
    if depth == 0:
        path.pop()
        return False
    for neighbor in graph[node]:
        if neighbor not in visited:
            if dfs(neighbor, goal, visited, depth-1, path, graph):
                return True
    path.pop()
    return False
graph = {
    '1': ['2', '6', '7'],
    '2': ['3', '4'],
    '3': [''],
    '4': ['5'],
    '5': [''],
    '6': [''],
    '7': ['8', '11'],
    '8': ['9', '10'],
    '10':[''],
    '11':['']
}

start = '1'
goal = '8'
max_depth = 3
path = iddfs(start, goal, max_depth, graph)

if path is None:
    print(f"No path found from {start} to {goal} within max depth {max_depth}")
else:
    path.reverse()
    path.pop()
    print(f"Path found from {start} to {goal}: {' -> '.join(path)}")