from typing import List, Tuple, Dict
from copy import deepcopy

def create_puzzle(size: int = 3) -> List[List[str]]:
    """Get puzzle configuration from user input."""
    print(f"Enter {size}x{size} puzzle configuration (use '_' for empty space)")
    print("Enter row by row, separating numbers with spaces")
    
    puzzle = []
    for _ in range(size):
        while True:
            row = input().strip().split()
            if len(row) == size:
                puzzle.append(row)
                break
            print(f"Please enter exactly {size} values")
    return puzzle

def find_empty(puzzle: List[List[str]]) -> Tuple[int, int]:
    """Find the coordinates of the empty space ('_')."""
    for i in range(len(puzzle)):
        for j in range(len(puzzle)):
            if puzzle[i][j] == '_':
                return i, j
    return -1, -1

def get_possible_moves(puzzle: List[List[str]]) -> List[Tuple[int, int]]:
    """Get all valid positions where the empty space can move."""
    x, y = find_empty(puzzle)
    moves = []
    
    # Check all four directions: up, down, left, right
    for new_x, new_y in [(x-1, y), (x+1, y), (x, y-1), (x, y+1)]:
        if 0 <= new_x < len(puzzle) and 0 <= new_y < len(puzzle):
            moves.append((new_x, new_y))
            
    return moves

def make_move(puzzle: List[List[str]], new_x: int, new_y: int) -> List[List[str]]:
    """Create a new puzzle state by moving the empty space to a new position."""
    current_x, current_y = find_empty(puzzle)
    new_puzzle = deepcopy(puzzle)
    
    # Swap empty space with target position
    new_puzzle[current_x][current_y], new_puzzle[new_x][new_y] = \
        new_puzzle[new_x][new_y], new_puzzle[current_x][current_y]
        
    return new_puzzle

def calculate_manhattan_distance(current: List[List[str]], goal: List[List[str]]) -> int:
    """Calculate the Manhattan distance heuristic between current and goal states."""
    distance = 0
    size = len(current)
    
    for i in range(size):
        for j in range(size):
            if current[i][j] != '_':
                # Find this number's position in goal state
                for gi in range(size):
                    for gj in range(size):
                        if goal[gi][gj] == current[i][j]:
                            distance += abs(i - gi) + abs(j - gj)
    return distance

def convert_to_string(puzzle: List[List[str]]) -> str:
    """Convert puzzle to string for dictionary key."""
    return ''.join(''.join(row) for row in puzzle)

def solve_puzzle(initial: List[List[str]], goal: List[List[str]]) -> List[List[List[str]]]:
    """
    Solve the puzzle using A* algorithm.
    Returns the sequence of moves from initial to goal state.
    """
    open_list = []  # States to explore
    closed_set = set()  # States already explored
    
    # Dictionary to track moves that led to each state
    came_from = {}
    
    # Dictionary to store g_scores (moves from start)
    g_score = {convert_to_string(initial): 0}
    
    # Initial state's f_score (g_score + heuristic)
    f_score = calculate_manhattan_distance(initial, goal)
    
    # Add initial state to open list
    open_list.append((f_score, initial))
    
    while open_list:
        # Get state with lowest f_score
        current_f_score, current = min(open_list)
        open_list.remove((current_f_score, current))
        
        current_str = convert_to_string(current)
        
        # Check if we reached the goal
        if current == goal:
            return reconstruct_path(came_from, current)
            
        closed_set.add(current_str)
        
        # Try all possible moves
        for new_x, new_y in get_possible_moves(current):
            neighbor = make_move(current, new_x, new_y)
            neighbor_str = convert_to_string(neighbor)
            
            if neighbor_str in closed_set:
                continue
                
            # Calculate scores
            tentative_g_score = g_score[current_str] + 1
            
            if any(neighbor == state for _, state in open_list):
                if tentative_g_score >= g_score.get(neighbor_str, float('inf')):
                    continue
            else:
                open_list.append((
                    tentative_g_score + calculate_manhattan_distance(neighbor, goal),
                    neighbor
                ))
            
            # This path is the best so far
            came_from[neighbor_str] = current
            g_score[neighbor_str] = tentative_g_score
    
    return []  # No solution found

def reconstruct_path(came_from: Dict[str, List[List[str]]], 
                    current: List[List[str]]) -> List[List[List[str]]]:
    """Reconstruct the path from initial state to goal."""
    total_path = [current]
    current_str = convert_to_string(current)
    
    while current_str in came_from:
        current = came_from[current_str]
        current_str = convert_to_string(current)
        total_path.append(current)
        
    return list(reversed(total_path))

def print_puzzle(puzzle: List[List[str]]):
    """Print the puzzle state in a readable format."""
    for row in puzzle:
        print(' '.join(row))
    print()

def main():
    print("\n=== 8-Puzzle Solver ===\n")
    
    # Get initial and goal states
    print("Enter initial state:")
    initial_state = create_puzzle()
    
    print("\nEnter goal state:")
    goal_state = create_puzzle()
    
    print("\nSolving...")
    solution = solve_puzzle(initial_state, goal_state)
    
    if solution:
        print("Solution found! Here are the steps:\n")
        for i, state in enumerate(solution):
            print(f"Step {i}:")
            print_puzzle(state)
    else:
        print("No solution found!")

if __name__ == "__main__":
    main()
