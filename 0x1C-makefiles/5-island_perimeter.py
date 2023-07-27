#!/usr/bin/python3
"""
Island Perimeter
A module for working with a grid structure.
"""


def island_perimeter(grid):
    """returns the perimeter of the island"""
    patch = 0
    border = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1
            patch += 1
            if row != len(grid) - 1:
                if grid[row + 1][col] == 1:
                    border += 1
            if col != len(grid[row]) - 1:
                if grid[row][col + 1] == 1:
                    border += 1
    perimeter = (patch * 4) - (border * 2)
    return perimeter
