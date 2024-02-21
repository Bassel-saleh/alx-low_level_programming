#!/usr/bin/python3
""" Defines a function which measures perimeter for an island """


def island_perimeter(grid):
    """ Return perimeter
    the grid represent land by 1 and water by 0
    Args:
        grid (list): a list of integers represents an island
    Returns:
        the perimeter
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0
    for a in range(height):
        for b in range(width):
            if grid[a][b] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    edges += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    edges += 1
    return size * 4 - edges * 2
