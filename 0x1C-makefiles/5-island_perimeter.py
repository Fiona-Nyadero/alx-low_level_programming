#!/usr/bin/python3

"""Island_perimeter module"""


def island_perimeter(grid):
    """
    Calculates the perimeter of an island on the grid
    """

    perim = 0

    for f in range(len(grid)):
        for g in range(len(grid[f])):
            if grid[f][g] == 1:
                if f == 0 or grid[f - 1][g] == 0:
                    perim += 1
                if f == len(grid) - 1 or grid[f + 1][g] == 0:
                    perim += 1
                if g == 0 or grid[f][g - 1] == 0:
                    perim += 1
                if g == len(grid[f]) - 1 or grid[f][g + 1] == 0:
                    perim += 1
    return perim
