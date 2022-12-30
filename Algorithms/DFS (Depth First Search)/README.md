# Path finding:

### Logic:
![image](https://user-images.githubusercontent.com/91827137/210004403-c6084ba9-d877-43d6-bfc9-d0d398a07581.png)

### To find the path from a source to destination:
1. Store the path as dictionary named as dfs_path. When moving to the next cell, we can store the information of the current cell and the childCell as key value pair of the dictionary. One obvious way can be the current cell being the key and child cell will be the value [dfs_path[currentCell] = childCell]. This way will not reach the destination; as if there are two suitable positions to move in, we can't pass the two positions of the key of one dictionary. So, if it reaches a dead point where it isn't the destination, it cann't move and will not reach the destination.
2. Thus, we will pass the childCell as a key and the current cell as its value. In this case, we will get the path but in the reverse direction. It will be needed to inverse that path to get the forward path from start to destination. This is simply done by swapping the keys and values of just the planned path.
3. For agent movement → Import the agent which is a class available in the pyMaze library and import also the color class.
-------------------------------------------------------------------------------------------------

# Topological sort
### Logic:
![DFS Topological sort](https://user-images.githubusercontent.com/91827137/210024512-429d1478-cd85-42cf-8234-b4fd213b1d42.PNG)
