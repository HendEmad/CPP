import math
# import graph_generation as grn
import heapq


def distance(u, v):
    return math.sqrt((u[0] - v[0]) ** 2 + (u[1] - v[1]) ** 2)


def dijkstra(graph, start, end):
    # Initialize the distance dictionary with infinite distances for all nodes except the start one
    dist = {node: float('inf') for node in graph}
    dist[start] = 0

    # Initialize the heap queue with the start node and its distance
    heap = [(0, start)]  # To keep track of nodes that need to be visited

    # Initialize the previous node dictionary to keep track of the shortest path
    prev = {}
    while heap:
        # pop the node with the smallest distance from the heap queue
        (dist_u, u) = heapq.heappop(heap)
        # stop the search if the end node is reached
        if u == end:  # if the u node is the end node, stop searching
            break
        # skip nodes that have already been visited
        if dist_u > dist[u]:  # If the distance to the current node u is > the distance stored in the dist dictionary for the node u
            #  this means that the node u has already been visited, and its distance has already been updated with a shorter path.
            continue
        # update the distances of the neighbor node and add them to the heap queue
        for v in graph[u]:
            # calculate the distance to the neighbor node
            alt = dist_u + distance(u, v)
            if alt < dist[v]:  # if the newly calculated distance is < the current distance of the node
                dist[v] = alt  # update the current distance with the new calculated one
                prev[v] = u
                heapq.heappush(heap, (alt, v))

    path = []
    u = end
    while u in prev:
        path.insert(0, u)
        u = prev[u]
    path.insert(0, u)
    return path


# graph = grn.generate_graph_from_obstacles_map('obstacle_map_file')
# start = (0, 0)
# goal = (99, 99)
# path = dijkstra(graph, start, goal)
# print(path)

'''
time complexity = O(Elogv) where E is no.of edges and v is no.of vertices
'''