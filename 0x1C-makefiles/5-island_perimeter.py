#!/usr/bin/python3
"""
Module for perimeter calculation
"""


def island_perimeter(grid) -> int:
    """"
    Culculate the perimter of a grid
    `grid` => list of lists
    """
    grid_width = len(grid[0])
    grid_height = len(grid)
    grid_edges = 0
    grid_size = 0

    for i in range(grid_height):
        for j in range(grid_width):
            if grid[i][j] == 1:
                grid_size += 1
                if j > 0 and grid[i][j - 1] == 1:
                    grid_edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    grid_edges += 1

    return (grid_size * 4) - (grid_edges * 2)
