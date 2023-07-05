// Dynamically creating array

// Syntax:
// pointer_variable = new data_type;

// Example:

// // Dynamically Array declaration by specifying size 
// int * a = new int[100];
// // Declare an array dynamically of user specified size 
// int n;
// cin >> n;
// int * arr = new int[n];

// Dynamically Deleting Arrays
// Syntax:


// delete [] arr;

 

// Example: Initializing a Dynamically declared Array.

 

#include<iostream>
using namespace std;

int main() {
    int i, n;
    cin >> n;
    int *arr = new int[n];
    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    cout << "Array elements " << endl;
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    delete [] arr;

    // cout<<arr[2]<<endl;  // GARBAGE VALUE

    return 0;
}

// Input: 5
// Output:
// Array elements 
// 1 2 3 4 5

// Dynamic Memory Allocation of Two-Dimensional Array

#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter the number of rows" << endl;
    cin >> row;
    cout << "Enter the number of columns" << endl;
    cin >> col;

    // Dynamically allocate memory of size row*col
    int *Arr = new int[row * col];

    // Assign values to the allocated memory
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            // Using pointer arithmetic to assign values to the 2-D array
            *(Arr + i * col + j) = rand() % 100;

    // Printing the 2D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << *(Arr + i * col + j) << " ";
            
        cout << endl;
    }

    // Deallocate memory
    delete[] Arr;
    return 0;
}

// Output:
// Enter the number of rows
// 4
// Enter the number of columns
// 5
// 83 86 77 15 93 
// 35 86 92 49 21 
// 62 27 90 59 63 
// 26 40 26 72 36 
// Method2: We can also dynamically create an array of pointers of size ‘row’ and then dynamically allocate memory of size ‘col’ for each row.

// Example:

#include <iostream>
using namespace std;

int main()
{
    int row, col;
    
    cout << "Enter the number of rows" << endl;
    cin >> row;
    cout << "Enter the number of columns" << endl;
    cin >> col;
    
    // Dynamically create array of pointers of size 'row'
    int **Arr = new int *[row];
    
    // Dynamically allocate memory of col-size 'col' for each row i.e for row indexed from 0 to row-1
    for (int i = 0; i < row; i++)
        Arr[i] = new int[col];

    // Assigning values to the allocated memory
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            Arr[i][j] = rand() % 100;

    // Printing the 2D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << Arr[i][j] << " ";

        cout << endl;
    }
    
    // Deallocate memory using delete[] operator
    for (int i = 0; i < row; i++) 
        delete[] Arr[i];

    delete[] Arr;
    return 0;
}

// Output:
// Enter the number of rows
// 3
// Enter the number of columns
// 4
// 83 86 77 15 
// 93 35 86 92 
// 49 21 62 27