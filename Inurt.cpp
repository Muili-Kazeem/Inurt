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


    // Pass by reference. Pass by value. Pass by Reference
    // PASS BY VALUE
    // When you pass a variable into a function, the value in it is copied into the variable. 
    // When the value is copied into the function and it gets changed in the function, it doesn't affect the value of the variable outside of the function
    // This is usually the behavious for most variable types except arrays
    // 
    // PASS BY POINTER
    // For array, the values in the variables, by default, passed by pointers. It 'decays to a pointer'. This give a pointer to the memory location of that array
    // When the variable is passed into the function and it gets changed inside the function, it affects and changes the value of the variable outside of the function too
    // This is by virtue of the pointer to the memory location through which it was passed to the function
    //
    // PASS BY REFERENCE
    // This is similar to passing by pointer but it doesn't happen automatically. It has to be explicitly instructed
    // This is done by prefixing the variable with & like so, function(type &var) { }
    // As such the variable both in and out of the function will refer to the same area of memory and can be modified by both as such
    // You most likely use this for datatypes that are passed by values by default to modify theri behaviour
    // NB: Even objects are passed by value
    // 


    // Function Overloading
    // This nigga said this is the cool part of programming. Time will tell
    // Function overloading is the concept of having multiple versions of the same function identifiers. Usually, what changes is the type (datatype) of parameter passed to the function
    // The return type of the multiple functions must also be similar. Having different return types defies the concept of function overloading
    // NB: Overloading is not defined for optional parameters.

    // MultiFile compilations
    // As your program gets larger, it will make sense to keep things separated in multile files.
    // For a start, you will most likely start off with 3 files which are usually:
    // Header files (declarations), implementation file (definitions) and the main file (calling)
    // all files will have .cpp extension except for the header files. This will have .h extension
    // Header files aside declarations also contain preprocessd files
    // The header files will be included in both implementation files
    // 
    //
    //


    return 0;
}

void like(int r)
{
    r* r;
};