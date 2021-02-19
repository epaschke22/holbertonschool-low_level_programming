#!/usr/bin/python3
"""doc string for ilsand perimeter counting"""


def island_perimeter(grid):
    """this is the function"""
    perimeter = 0
    for y in range(0, len(grid)):
        for x in range(0, len(grid[y])):
            if grid[y][x] == 1:
                perimeter += 4
                try:
                    if grid[y][x + 1] == 1:
                        perimeter -= 1
                except:
                    pass
                try:
                    if grid[y][x - 1] == 1:
                        perimeter -= 1
                except:
                    pass
                try:
                    if grid[y + 1][x] == 1:
                        perimeter -= 1
                except:
                    pass
                try:
                    if grid[y - 1][x] == 1:
                        perimeter -= 1
                except:
                    pass
    return perimeter
