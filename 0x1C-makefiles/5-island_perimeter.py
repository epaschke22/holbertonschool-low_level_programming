#!/usr/bin/python3
"""doc string for ilsand perimeter counting"""


def island_perimeter(grid):
    """this is the function"""
    if len(grid) == 0:
        return 0
    perimeter = 0
    for y in range(0, len(grid)):
        for x in range(0, len(grid[y])):
            if grid[y][x] == 1:
                if y == 0:
                    perimeter += 1
                if y == (len(grid) - 1):
                    perimeter += 1
                if x == 0:
                    perimeter += 1
                if x == (len(grid[y]) - 1):
                    perimeter += 1
                try:
                    if grid[y][x + 1] == 0:
                        perimeter += 1
                except:
                    pass
                try:
                    if grid[y][x - 1] == 0:
                        perimeter += 1
                except:
                    pass
                try:
                    if grid[y + 1][x] == 0:
                        perimeter += 1
                except:
                    pass
                try:
                    if grid[y - 1][x] == 0:
                        perimeter += 1
                except:
                    pass
    return perimeter
