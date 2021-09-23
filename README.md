# 1_maze


# common.h
This contains the maze_room struct that is used to build the maze.

# common.c
This initialises the maze as a 2D array of maze_rooms, and contains some helper funtions to check the validity of calls when traversing the maze during generation and solving.

# generator.c
This generates a randomised maze, using a drunken walk algortihm to place walls as it traverses the initialised maze. The program also generates an encoded .txt file containing information about the maze.

# solver.c
This takes in an encoded maze as a .txt file, and decodes it into a 2D array of maze_rooms. It then uses a depth first search algorithm to find a solution to the maze. It also prints out the solution onto a .txt file.
