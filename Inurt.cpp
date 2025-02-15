// Inurt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    // Writing to files
    /* 
        std::string filename;
        std::cin >> filename;

        std::ofstream file(filename, std::ios::app);
        file << "This is the start of the file";
    */

    // Multidimensional Arrays and Nested Vectors
    // 
    // Multimensional Arrays
    // declared like so: int grades[][n] = {{2, 3, 4}, {34, 53, 21} {3, 4, 54}}
    // The inner size of the array can be inferred but the outer dimension has to be explicitedly stated as seen indicated by 'n'
    // 
    // Same can be done with vectors and they are like so
    // std::vector<std::vector<int>> grades = {{2, 3, 4}, {34, 53, 21} {3, 4, 54}}


    // Pass by reference. Pass by value
    // PASS BY VALUE
    // When you pass a variable into a function, the value in it is copied into the variable. 
    // When the value is copied into the function and it gets changed in the function, it doesn't affect the value of the variable outside of the function
    // This is usually the behavious for most variable types except arrays
    // 
    // PASS BY POINTER
    // For array, the values in the variables, by default, passed by pointers. This give a pointer to the memory location of that array
    // When the variable is passed into the function and it gets changed inside the function, it affects and changes the value of the variable outside of the function too
    // This is by virtue of the pointer to the memory location through which it was passed to the function
    //
    //
    //


    return 0;
}
