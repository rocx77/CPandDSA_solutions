import networkx as nx #type:ignore
import matplotlib.pyplot as plt

def create_graph_from_input():
    n, m = list(map(int, input().split()))[:2]
    graph = {}
    for i in range(n):
        graph[str(i)] = set()
    for _ in range(m):
        u, v = map(int, input().split())
        graph[str(u)].add(str(v))
        graph[str(v)].add(str(u))
    return graph

graph0 = create_graph_from_input()

G = nx.Graph()
for node in graph0.keys():
    G.add_node(node)
for node, adjnodes in graph0.items():
    for adjnode in adjnodes:
        G.add_edge(node, adjnode)

# Get all connected components
components = [G.subgraph(c).copy() for c in nx.connected_components(G)]

# Compute bfs_layout for each component
pos = {}
for i, component in enumerate(components):
    if component.number_of_nodes() > 0:  # Ensure component has nodes
        start_node = list(component.nodes())[0]
        component_pos = nx.bfs_layout(component, start_node)
        for node, pos_tuple in component_pos.items():
            pos[node] = (pos_tuple[0] + i * 2, pos_tuple[1])  # Shift components horizontally

# Draw the graph
nx.draw(G, pos, with_labels=True, node_color='#25d366', node_size=1200, 
        edge_color="#22252d", font_size=15)
plt.title("Graph")
plt.show()