#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "common.h"

/*
 * Determines whether or not the room at [row][col] is a valid room within the
 *maze with dimensions num_rows x num_cols
 *
 * Parameters:
 *  - row: row of the current room
 *  - col: column of the current room
 *  - num_rows: number of rows in the maze
 *  - num_cols: number of columns in the maze
 *
 * Returns:
 *  - 0 if room is not in the maze, 1 if room is in the maze
 */
int is_in_range(int row, int col, int num_rows, int num_cols) {
    // TODO: implement function
    return (row < num_rows) && (col < num_cols) && (row >= 0) && (col >= 0);
}

/*
 * Given a pointer to the room and a Direction to travel in, return a pointer to
 *the room that neighbors the current room on the given Direction. For example:
 *get_neighbor(&maze[3][4], EAST) should return &maze[3][5]
 *
 * Parameters:
 *  - num_rows: number of rows in the maze
 *  - num_cols: number of columns in the maze
 *  - room: pointer to the current room
 *  - dir: Direction to get the neighbor from
 *  - maze: a 2D array of maze_room structs representing your maze
 * Returns:
 *  - pointer to the neighboring room
 */
struct maze_room *get_neighbor(int num_rows, int num_cols,
                               struct maze_room maze[num_rows][num_cols],
                               struct maze_room *room, Direction dir) {
    // TODO: implement function
    int row = room->row;
    int col = room->col;

    if (dir == EAST && is_in_range(row, col+1, num_rows, num_cols)) {
        return &maze[row][col+1];

    } else if (dir == WEST && is_in_range(row, col-1, num_rows, num_cols)) {
        return &maze[row][col-1];

    } else if (dir == SOUTH && is_in_range(row+1, col, num_rows, num_cols)) {
        return &maze[row+1][col];

    } else if (dir == NORTH && is_in_range(row-1, col, num_rows, num_cols)) {
        return &maze[row-1][col];

    } else {
        return NULL;
    }
}


/*
 * Initializes a 2D array of maze rooms with all of the necessary values
 *
 * Parameters:
 *  - num_rows: the number of the rows in the maze
 *  - num_cols: the number of columns in the maze
 *  - maze: a 2D array of uninitialized maze_rooms (to be initialized in
 *     this function)
 *
 * Returns:
 *  - nothing (the initialized maze will be stored in the 'maze' array)
 */
void initialize_maze(int num_rows, int num_cols,
           struct maze_room maze[num_rows][num_cols]) {
    // TODO: implement function
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            // TODO: wallCode set to neither walls nor openings
            maze[i][j] = (struct maze_room){.row = i, .col = j, .visited = 0, .wallCode = {-1, -1, -1, -1}};
        }
    }
}













