import math
import Dijkstra_algorithm as da


def triangle_area(x1, y1, x2, y2, x3, y3):
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y2 - y1)) / 2)


# A function to read the obstacles_map_file and generate the graph
def generate_graph_from_obstacles_map(obstacles_map_file):
    global node
    graph = {}  # a dictionary of graph (nodes, edges)

    # Open the obstacle map file and read environment dimensions
    with open(obstacles_map_file, 'r') as f:
        line = f.readline().strip().split()
        size_x, size_y = int(line[1]), int(line[2])

        # read the circle obstacle
        line = f.readline().strip().split()
        x, y, r = int(line[1]), int(line[2]), int(line[3])

        # check if the current state (i, j) is within the circle obstacle
        for i in range(size_x):
            for j in range(size_y):
                if math.sqrt((i - x) ** 2 + (j - y) ** 2) <= r:
                    # if so, add the graph node
                    node = (i, j)
                    graph[node] = []
                    # print(graph)

                    # Check if adjacent neighboring positions inside the circle obstacle
                    for ni in range(i - 1, i + 2):
                        for nj in range(j - 1, j + 2):
                            if (ni != i or nj != j) and \
                                    0 <= ni < size_x and 0 <= nj < size_y and \
                                    math.sqrt((ni - x) ** 2 + (nj - y) ** 2) <= r:
                                neighbor = (ni, nj)
                                graph[node].append(neighbor)  # if so, add an edge

        # Read the rectangle obstacle
        line = f.readline().strip().split()
        x1, y1, x2, y2 = int(line[1]), int(line[2]), int(line[3]), int(line[4])

        # check if the current state (i, j) is within the rectangle obstacle
        for i in range(size_x):
            for j in range(size_y):
                if x1 <= i <= x2 and y1 <= j <= y2:
                    node = (i, j)  # if yes, add it as a node
                    graph[node] = []
                    # print(graph)

                    # check if adjacent neighboring positions inside the rect. obstacle
                    for ni in range(i - 1, i + 2):
                        for nj in range(j - 1, j + 2):
                            if (ni != i or nj != j) and \
                                    0 <= nj < size_x and 0 <= nj < size_y and \
                                    x1 <= ni <= x2 and y1 <= nj <= y2:
                                neighbor = (ni, nj)
                                graph[node].append(neighbor)

        # Read the triangle obstacle
        line = f.readline().strip().split()
        x1, y1, x2, y2, x3, y3 = int(line[1]), int(line[2]), int(line[3]), int(line[4]), int(line[5]), int(line[6])

        # Check if the current state (i, j) is within the triangle obstacle
        for i in range(size_x):
            for j in range(size_y):
                A = triangle_area(x1, y1, x2, y2, x3, y3)
                a1 = triangle_area(i, j, x1, y1, x2, y2)
                a2 = triangle_area(i, j, x1, y1, x3, y3)
                a3 = triangle_area(i, j, x2, y2, x3, y3)
                if A == a1 + a2 + a3:
                    # if so, add it as a node
                    node = (i, j)
                    graph[node] = []
                    # print(graph)

                    # check if the adjacent neighboring positions is inside the triangle obstale
                    for ni in range(i - 1, i + 2):
                        for nj in range (j - 1, j + 2):
                            na = triangle_area(ni, nj, x1, y1, x2, y2)
                            nb = triangle_area(ni, nj, x1, y1, x3, y3)
                            nc = triangle_area(ni, nj, x2, y2, x3, y3)
                            if (ni != 0 or nj != 0) and \
                                    (0 <= ni < size_x and 0 <= nj < size_y) and \
                                    (A == na + nb + nc):
                                neighbor = (ni, nj)
                                graph[node].append(neighbor)
    return graph


graph = generate_graph_from_obstacles_map('obstacle_map_file')
start = (0, 0)
goal = (99, 99)
# shortest_path = da.dijkstra(graph, start, goal)
print(graph)
