#include <iostream>

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void addMatrices(int matrix1[MAX_ROWS][MAX_COLS], int matrix2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void multiplyMatrices(int matrix1[MAX_ROWS][MAX_COLS], int matrix2[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows1, int cols1, int cols2)
{
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols2; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main()
{
    // Matrix sizes
    const int rows1 = 3, cols1 = 2;
    const int rows2 = 2, cols2 = 4;

    // Matrices
    int matrix1[MAX_ROWS][MAX_COLS];
    int matrix2[MAX_ROWS][MAX_COLS];
    int resultAddition[MAX_ROWS][MAX_COLS];
    int resultMultiplication[MAX_ROWS][MAX_COLS];

    // Initializing matrices
    // You can input your own matrix values here
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols1; ++j)
        {
            matrix1[i][j] = i + j;
        }
    }

    for (int i = 0; i < rows2; ++i)
    {
        for (int j = 0; j < cols2; ++j)
        {
            matrix2[i][j] = i - j;
        }
    }

    // Displaying matrices
    std::cout << "Matrix 1:" << std::endl;
    displayMatrix(matrix1, rows1, cols1);

    std::cout << "\nMatrix 2:" << std::endl;
    displayMatrix(matrix2, rows2, cols2);

    // Performing addition
    addMatrices(matrix1, matrix2, resultAddition, rows1, cols1);
    std::cout << "\nMatrix Addition:" << std::endl;
    displayMatrix(resultAddition, rows1, cols1);

    // Performing multiplication
    multiplyMatrices(matrix1, matrix2, resultMultiplication, rows1, cols1, cols2);
    std::cout << "\nMatrix Multiplication:" << std::endl;
    displayMatrix(resultMultiplication, rows1, cols2);

    return 0;
}
