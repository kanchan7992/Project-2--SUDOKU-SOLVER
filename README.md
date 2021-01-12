# SUDOKU SOLVER 

In this Project, we are given a partially filled 9×9 2D array ‘grid[9][9]’, the goal is to assign digits (from 1 to 9) to the empty cells so that every row, column, and subgrid of size 3×3 contains unique digits from 1 to 9. 

Basically, I have used backtracking algorithm to solve the sudoku which is a type of brute force search. Backtracking is a depth-first search (in contrast to a breadth-first search), because it will completely explore one branch to a possible solution before moving to another branch. In this way, we can solve the sudoku very easily.

Also, Programming language used here is C++ which is not very tough once you start using it. I have created a function to check whether the number is safe to place at the particular location or not. If not then return false else true.

This Project can be used to solve any Sudoku in the world if it is a valid sudoku. We can also use it to to develop any sudoku- related game. Overall, it is a good project and can be included your CV .

Time Complexity : O(9^n * n)

Space Complexity : O(n * n)



