from collections import deque

def bfs(graph, start_node):

    queue = deque([start_node])
    visited = set([start_node])
    visit_order = []

    while queue:
        current_node = queue.popleft()
        visit_order.append(current_node)

        for neighbor in graph[current_node]:
            if neighbor not in visited:
                visited.add(neighbor)
                queue.append(neighbor)

    return visit_order


graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F'],
    'D': [],
    'E': ['F'],
    'F': []
}

visit_order = bfs(graph, 'A')
print(visit_order)
