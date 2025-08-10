# Experiment 8 – To Study and Implement 2D Arrays in C++
## Aim:
To study the concept of two-dimensional arrays in C++ and implement basic operations such as:

## Objectives:
To understand declaration, initialization, and traversal of 2D arrays in C++.

To perform matrix operations:

    Displaying the entered matrix

    Matrix addition

    Matrix multiplication

    Diagonal sum 
 
    Matrix transpose

To apply nested loops for multi-dimensional data processing.

To develop problem-solving skills involving tabular/matrix-based data.

To relate mathematical concepts of matrices with C++ programming.

## Theory:
### 1. Definition of a 2D Array
A two-dimensional array is a collection of elements arranged in rows and columns, stored in contiguous memory locations.
It can be visualized as a matrix or a table.

Example:
```
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```
Here, matrix[0][0] = 1 and matrix[2][1] = 8.

### 2. Memory Representation
In C++, 2D arrays are stored in row-major order:

All elements of the first row are stored together in memory, followed by the second row, and so on.

### 3. Declaration & Initialization
Static Declaration:
```
int arr[2][3]; // 2 rows, 3 columns
```

Initialization:
```
int arr[2][3] = { {1,2,3}, {4,5,6} };
```

Partial Initialization:
```
int arr[2][3] = { {1}, {4,5} }; // Remaining elements set to 0
```

### 4. Operations on 2D Arrays
#### A. Displaying a Matrix
Input using nested loops (for loop inside another for loop).

Output in matrix form.

#### B. Matrix Addition
Condition: Dimensions must be equal (m x n).

Formula: C[i][j] = A[i][j] + B[i][j]

#### C. Matrix Multiplication
Condition: If A is m x n and B is n x p, result will be m x p.
​
Requires triple nested loops.

#### D. Diagonal Addition
Primary diagonal (top-left to bottom-right): Elements where i == j.

Secondary diagonal (top-right to bottom-left): Elements where i + j == n - 1.

#### E. Transpose of a Matrix
Definition: Interchanging rows and columns.

Used in mathematics, graphics, and image processing.

### 5. Advantages of 2D Arrays
Organizes data in matrix form.

Useful in image processing, scientific computing, data analysis.

Efficient for mathematical computations.

### 6. Limitations
Fixed size (static allocation).

Memory wastage if unused elements exist.

Insertion/deletion operations are costly.

## Program Description:
We implemented four programs in this experiment:

#### Matrix Display:

Used nested loops to store and print matrix elements.

#### Matrix Addition:

Input two matrices of same size and add corresponding elements.

#### Matrix Multiplication:

Used three loops to calculate sum of products for each element in result matrix.

#### Diagonal Addition:

Summed elements where i == j (primary) or i + j == n - 1 (secondary).

#### Transpose of a Matrix:

Interchanged rows and columns.

## Concepts Used:
Nested Loops

Conditional Statements

Array Traversal

Index-based Access

## Sample Output

### 1. Displaying Matrix
```
Enter 9 numbers for 3:3 matrix: 2 3 4 1 5 6 7 8 9
2	3	4	
1	5	6	
7	8	9
```

### 2. Addition and Multiplication of 2D Array
```
Enter matrix-1 rows: 2
Enter matrix-1 columns: 2
Enter matrix-2 rows: 3
Enter matrix-2 columns: 3
Enter element-(00): 0
Enter element-(01): 1
Enter element-(10): 2
Enter element-(11): 3
Enter element-(00): 4
Enter element-(01): 5
Enter element-(02): 6
Enter element-(10): 7
Enter element-(11): 8
Enter element-(12): 9
Enter element-(20): 10
Enter element-(21): 11
Enter element-(22): 12

Dimensions of Matrices should be equal to perform Addition of Matrices

Column of matrix-1 is not equal to row of matrix-2.
Therefore Multiplication can't be performed.
```

```
Enter matrix-1 rows: 2
Enter matrix-1 columns: 2
Enter matrix-2 rows: 2
Enter matrix-2 columns: 2
Enter element-(00): 1
Enter element-(01): 2
Enter element-(10): 3
Enter element-(11): 4
Enter element-(00): 5
Enter element-(01): 6
Enter element-(10): 7
Enter element-(11): 8
---Matrix 1---
1	2	
3	4	
---Matrix 2---
5	6	
7	8	

---ADDTION OF MATRICES---
6  8  
10  12  

---MULTIPLICATION OF MATRICES---
19  22  
43  50  
```

### 3. Diagonal Addition
```
Enter row for matrix: 2
Enter row for matrix: 3
Diagnol addition can't be performed for given dimensions
```
```
Enter row for matrix: 2
Enter column for matrix: 2

---Diagonal Additon---
Enter element (00): 1
Enter element (01): 2
Enter element (10): 3
Enter element (11): 4

Sum of diagnol-1: 5
Sum of diagnol-2: 5
```

### 4. Transpose of Matrix
```
Enter number of rows: 2
Enter number of columns: 3
Transpose can't be performed!
```

```
Enter number of rows: 3
Enter number of columns: 3
Enter element 11: 1
Enter element 12: 2
Enter element 13: 3
Enter element 21: 4
Enter element 22: 5
Enter element 23: 6
Enter element 31: 7
Enter element 32: 8
Enter element 33: 9

---Original Matrix---
1	2	3	
4	5	6	
7	8	9	

---Transposed Matrix---
1  4  7  
2  5  8  
3  6  9  
```
