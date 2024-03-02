#!/usr/bin/python3
"""
Module to calculate island perimeter
interview task
AmrTAMAN
"""


def island_perimeter(grid):
    """
    working function for calc of perimeter
    Well done
    """
    perimeter = 0
    rows = len(grid)
    colm = len(grid[1])
    for x in range(rows):
        for y in range(colm):
            if (grid[x][y] == 0 and x + 1 <= rows - 1 and
                    grid[x + 1][y] == 1):
                perimeter += 1
            elif (grid[x][y] == 0 and x - 1 >= 0 and grid[x - 1][y] == 1):
                perimeter += 1
            elif (grid[x][y] == 0 and y + 1 <= colm - 1 and
                    grid[x][y + 1] == 1):
                perimeter += 1
            elif (grid[x][y] == 0 and y - 1 >= 0 and
                    grid[x][y - 1] == 1):
                perimeter += 1
    return (perimeter)
