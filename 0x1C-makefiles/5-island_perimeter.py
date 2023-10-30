#!/usr/bin/python3

"""
5-island_perimeter
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.
    
    Args:
        grid (list of list of integers): The grid representing the island.
        
    Returns:
        int: The perimeter of the island.
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0
    
    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4  # Add the base perimeter for land cell
                
                # Check the neighbors
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Subtract the shared side with upper cell
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2  # Subtract the shared side with left cell
                    
    return perimeter

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))

