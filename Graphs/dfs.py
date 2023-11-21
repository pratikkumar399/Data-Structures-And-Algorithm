# lets write dfs algo for graph
# the first step will be building the graph


class Graph:
    def __init__(self):
        self.graph = {}

    def add_edge(self, u, v):
        if u not in self.graph.keys():
            self.graph[u] = [v]
        else:
            self.graph[u].append(v)

        if v not in self.graph.keys():
            self.graph[v] = [u]
        else:
            self.graph[v].append(u)

    def dfs(self, start):
        visited = {}
        for node in self.graph.keys():
            visited[node] = False

        self.dfs_util(start, visited)

    def dfs_util(self, node, visited):
        visited[node] = True
        print(node, end=" ")

        for neighbour in self.graph[node]:
            if visited[neighbour] == False:
                self.dfs_util(neighbour, visited)

    def print_graph(self):
        for node in self.graph.keys():
            print(node, end=" ")
            for neighbour in self.graph[node]:
                print("->", neighbour, end=" ")
            print()


g = Graph()
# add nodes in the graph
g.add_edge(0, 1)
g.add_edge(0, 2)
g.add_edge(1, 3)
g.add_edge(2, 4)
g.add_edge(3, 5)
g.add_edge(4, 5)

# dfs traversal
# g.dfs(0)

# print the graph
g.print_graph()
