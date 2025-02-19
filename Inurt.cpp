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
    // Function overloading is the concept of having multiple versions of the same function identifiers. Usually, what changes is the type (datatype) of parameter passed to the function or the number of parameters it's defined with
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

    // Makefiles
    // Basically automate the build process for C++ applications
    // Ensures not every C++ files get compiled after every change in any file. Just recompile only the changed file(s) and ensure appropriate linking of all files to the full program
    // This minimizes the amount of compilations necessary 
    // a makefile is just a text file and it has a particular strict syntax to it
    //

    // Namespaces
    // A very popular namespace we have used so far is the standard namespace - std
    // Namespaces basically give a scope to the identifier in the namespace. They are very important when avoiding naming conflicts
    // We can create our own namespace and it is very easy like so:
    //      namespace foo {
    //      define everything you want to be part of the namespace here
    //      }
    // 
    // You would want to use a namepsace in the case of defining a set of common functionality
    // Also to group a project or part of a particular project
    // Also can be used to have a categories of things and chose which one you particularly want to use from a particular namespace
    //

    // Function templates
    // You may hear this as generics in other programming languages
    // This can be tied to functions as well as classes
    // 
    // So here's the thing, when you create a function you define the type you want to accept as arguments. Of course, you can't accept any other types aside that
    // This point is where function overloading trickles in. Where functions have multiple versions of the same function identifiers but different types of parameter or number of parameter.
    // In the case of function overloading, the compiler determines what funtion to call based on the number or type of argument passed to the function
    // Function templates comes in in the sense that you don't define the types but use something that is generic. A placeholder for any type. A template sort of for the parameter
    // To indicate to the compiler that you are about to define a function template, you use this syntax:
    //      template <typename T>
    //      void swap ( T &x, T &y) { }
    // Here, T = Generic/Template type, x and y = parameter, & = passing the argument by reference.
    // In the fucntion body definition, you get to use T as if it were any other type
    // 
    // A reminder that function templates can be overloaded


    // OBJECT ORIENTED PROGRAMMING
    // Classes and objects form the fundamental basis for OOP. Class defines the structuren or the shape of some data. It's the blueprint that is used to make instances of an object.
    // It is basically used to define and instantiate objects

    // Concepts in OOP
    // STRUCTS
    // These are similar to classes but by convention, they are used for smaller object concepts while classes are reserved for much larger ones
    // 
    // ENCAPSULATION
    // This is basically hiding the inner details of classes and how to interact with class
    //
    // INHERITANCE
    // This is where classes inherit from other classes
    // 
    // POLYMORPHISM
    // This is where classes can be interpreted as other classes such as their parent classes
    //

    // Access Modifiers
    // Public: Public members will be visible and can be accessed on objects instantiated from that class
    // Private: Private members will not be visible on the object instantiated from that class but can only be accessed within that class definition
    // Protected: Similar to private but extends down to the class that inherits from that class
    //

    // STRUCTS
    // In C++, a struct and a class are essentially the same thing. Both will create an object
    // Difference is just generally conventional. People use structs for generally small structures and classes for larger structures
    // Other differences include:
    // Syntactically, both have different default access modifiers behaviour.
    // 
    //


    return 0;
}

void like(int r)
{
    r* r;
};