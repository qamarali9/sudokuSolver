# sudokuSolver
Solves Sudoku, assuming the given sudoku is proper i.e, has one and only one solution. In case of multiple solutions, lexigocraphically first solution, starting from first row, would be returned.
Input format: Each row, consisting of 9 digits, each digit ranges from 0 to 9, separated by new-line or white-space. '0', without quotes, represents a blank cell.

Sample Input: 

0 0 0 5 0 0 3 0 9
6 4 0 3 0 0 0 0 0
3 0 2 0 0 0 1 0 0
0 0 6 0 5 0 0 0 3
0 9 3 0 0 0 8 4 0
8 0 0 0 9 0 7 0 0
0 0 4 0 0 0 6 0 8
0 0 0 0 0 7 0 9 1
9 0 8 0 0 6 0 0 0

Output for sample input:

1 8 7 5 6 4 3 2 9 
6 4 9 3 1 2 5 8 7 
3 5 2 7 8 9 1 6 4 
4 7 6 2 5 8 9 1 3 
5 9 3 6 7 1 8 4 2 
8 2 1 4 9 3 7 5 6 
7 1 4 9 2 5 6 3 8 
2 6 5 8 3 7 4 9 1 
9 3 8 1 4 6 2 7 5 
