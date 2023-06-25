import math
import random
import GPS_readings


# A function to calculate the distance between two points --> edges
def distance(p1, p2):
    start_x, start_y = p1
    end_x, end_y = p2
    return math.sqrt((end_x - start_x) ** 2 + (end_y - start_y) ** 2)


# A function to find the node with the smallest distance
def find_smallest_distance(distances, visited):
    smallest_distance = math.inf
    smallest_node = None
    for node in distances:
        if node not in visited and distances[node] < smallest_distance:
            smallest_distance = distances[node]
            smallest_node = node
    return smallest_node


# A function to generate a random graph with the given number of nodes
def generate_random_graph(num_nodes, start_loc, end_loc):
    nodes = {'start': start_loc, 'end': end_loc}
    for i in range(num_nodes):
        label = chr(ord('A') + i)
        x = random.uniform(start_loc[0], end_loc[0])
        y = random.uniform(start_loc[1], end_loc[1])
        nodes[label] = (x, y)

    # Define the graph
    graph = {}
    for node1 in nodes:
        for node2 in nodes:
            if node1 != node2:
                if node1 not in graph:
                    graph[node1] = {}
                if node2 not in graph:
                    graph[node2] = {}
                graph[node1][node2] = distance(nodes[node1], nodes[node2])
                graph[node2][node1] = graph[node1][node2]

    return nodes, graph


# Define start and end locations
print("The start and end locations are here...")
start_loc = (GPS_readings.start_x, GPS_readings.start_y)
end_loc = (GPS_readings.end_x, GPS_readings.end_y)

# Generate a random graph with 10 nodes
nodes, graph = generate_random_graph(10, start_loc, end_loc)

# Initialize the algorithm
distances = {}
predecessors = {}
visited = []

for node in graph:
    distances[node] = math.inf
distances['start'] = 0

# Explore the graph
print("The algorithm starts...")
current_node = 'start'
while current_node != 'end':
    for neighbour in graph[current_node]:
        if neighbour not in visited:
            new_distance = distances[current_node] + graph[current_node][neighbour]
            if new_distance < distances[neighbour]:
                distances[neighbour] = new_distance
    visited.append(current_node)
    current_node = find_smallest_distance(distances, visited)

# Choose the optimal path

path = ['end']
while current_node != 'start':
    path.insert(0, current_node)
    current_node = predecessors[current_node]
path.insert(0, 'start')

# print the optimal path
print("optimal path: ", path)

'''
Time complexity: 
-------------------
Generating the random graph: O(n^2).
Finding the smallest distance: O(n).
Calculating distances: O(n^2).
Exploring the graph: O(n^2).
Choosing the optimal path: O(n).

So, the algorithm time complexity = O(n^2).
'''