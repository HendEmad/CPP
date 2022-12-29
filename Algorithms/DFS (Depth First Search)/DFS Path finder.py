from pyamaze import maze, agent, COLOR


# A function for DFS algorithm
def DFS(m):
    start = (m.rows, m.cols)  # the start cell is the last cell -- changeable
    explored = [start]  # List for explored nodes
    frontier = [start]  # List for points to be explored
    dfsPath = {}  # Empty dictionary for the path
    while len(frontier) > 0:
        # add the loop condition inside of loop body if the frontier list is not empty
        currCell = frontier.pop()
        # If the current cell is the goal, end the process
        if currCell == (1, 1):
            break
        # Explore each direction to verify that there is a path
        for direction in 'WNSE':
            if m.maze_map[currCell][direction]:
                if direction == 'E':
                    childCell = (currCell[0], currCell[1] + 1)
                elif direction == 'W':
                    childCell = (currCell[0], currCell[1] - 1)
                elif direction == 'S':
                    childCell = (currCell[0] + 1, currCell[1])
                elif direction == 'N':
                    childCell = (currCell[0] - 1, currCell[1])
                # Check if the cell is found in the explored list
                if childCell in explored:
                    continue  # Do nothing
                # Otherwise, append the childCll onto both frontier and explored lists
                explored.append(childCell)
                frontier.append(childCell)
                dfsPath[childCell] = currCell
    forward_path = {}
    cell = (1, 1)  # destination
    while cell != start:
        # Pick the value from dfs path and make this as the key of the forward path
        forward_path[dfsPath[cell]] = cell  # The value of the forward path will be the key of the dfs path
        cell = dfsPath[
            cell]  # This operation will be done till the next cell is the start cell which is the destination
    return forward_path


if __name__ == '__main__':
    m = maze(5, 5)  # Specify the maze size
    m.CreateMaze(loopPercent=100)  # Create a random maze

    # The needed maze attributes
    print(m.rows)  # For the rows number
    print(m.cols)  # For the columns number
    print(m.maze_map)  # Details of the open and close paths of the maze

    # For maze_map attribute, the output is a dictionary; the keys are the cells, and the values is another dictionary with the information about the open and closed path in the form of the east, west, north and south directions
    path = DFS(m)

    # Create an agent and passes the maze m as the first argument, then make the optional argument footPrint = True to see the complete path traveled by the agent
    a = agent(m, footprints=True)  # By default, the agent is placed on the first cell of the maze
    # For tracePath method, pass the input argument as a dictionary with the key as the agent and the value the path we want that agent to follow which is the output of the function DFS
    m.tracePath({a: path})

    m.run()  # Run the maze simulation
