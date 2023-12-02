#include <iostream>

// Function to access an element in the array with bounds checking
int safeAccess(const int arr[], int size, int index, bool &success)
{
    if (index < 0 || index >= size)
    {
        success = false;
        return -1; // Return a special value to indicate failure
    }

    success = true;
    return arr[index];
}

int main()
{
    const int SIZE = 5;
    int myArray[SIZE] = {1, 2, 3, 4, 5};

    bool success;
    /// Test with a valid index
    int result1 = safeAccess(myArray, SIZE, 2, success);
    if (success)
    {
        std::cout << "Value at index 2: " << result1 << std::endl;
    }
    else
    {
        std::cout << "Index out of bounds." << std::endl;
    }

    // Test with an invalid index
    int result2 = safeAccess(myArray, SIZE, 8, success);
    if (success)
    {
        std::cout << "This line will not be executed." << std::endl; // Not reached
    }
    else
    {
        std::cout << "Index out of bounds." << std::endl;
    }

    return 0;
}
