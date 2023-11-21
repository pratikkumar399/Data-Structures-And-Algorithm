def dfs(graph, start, visited):
    visited[start] = 1
    print(start, end=" ")

    for neighbour in graph[start]:
        if not visited[neighbour]:
            dfs(graph, neighbour, visited)


if __name__ == "__main__":
    n, e, start = map(int, input().split())

    # build the graph
    graph = [[] for _ in range(n)]
    for _ in range(e):
        u, v = map(int, input().split())
        graph[u].append(v)
        graph[v].append(u)

    # visited array
    visited = [0] * n
    # dfs traversal
    dfs(graph, start, visited)
    print()
