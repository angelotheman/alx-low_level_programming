#!/usr/bin/python3
"""
Tecnical Interview Prep
"""


def island_perimeter(grid):
    """
    Calculates the perimeter given the grid

    Args:
        grid - The 6 x 6 matrix

    Return:
        The perimeter of the given grid
    """

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # Check left neighbour
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check right neighbour
                if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
                # Check top neighbour
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # Check bottom neighbour
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1

    return perimeter
