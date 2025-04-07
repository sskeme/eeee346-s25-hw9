# Introduction

In this homework assignment, you will practice working with dynamic binding in C++. 
Specifically, you will implement a class hierarchy involving a base class and two derived classes, each overriding virtual functions to perform different operations. 

# Tasks
You will find three C++ classes defined in the `shape.h` file that need to be completed. Since the member functions are simple, implement them directly within each class definition. Below are the details for each class:

1. class `Shape`: This class is a base class.
* `public` member functions:
  * pure virtual function `area`:
    * No parameters
    * double return type
  * pure virtual function `perimeter`:
    * No parameters
    * double return type
  * pure virtual function `display`:
    * No parameters
    * void return type

2. class `Circle`: This class publicly inherites from the `Shape` class.
* `private` member variable:
  * double-typed `radius`
* `public` member functions:
  * constructor with a parameter `r`: Initializes the member variable `radius` using the parameter.
  * member function `area`: Calculates the circle area and returns the result. Use the constant `M_PI` for pi. This member function will override the `area` function of `Shape`.
  * member function `perimeter`: Calculates the circle perimeter (circumference) and returns the result. Use the constant `M_PI` for pi. This member function will override the `perimeter` function of `Shape`. 
  * member function `display` (completed): Prints the information about the current circle object. This member function will override the `display` function of `Shape`.

3. class `Rectangle`: This class also publicly inherites from the `Shape` class.
* `private` member variables:
  * double-typed `width`
  * double-typed `height`
* `public` member functions:
  * constructor with parameters `w` and `h`: Initializes the member variables `width` and `height` using the parameters.
  * member function `area`: Calculates the rectangle area and returns the result. This member function will override the `area` function of `Shape`.
  * member function `perimeter`: Calculates the rectangle perimeter and returns the result. This member function will override the `perimeter` function of `Shape`. 
  * member function `display` (completed): Prints the information about the current rectangle object. This member function will override the `display` function of `Shape`.

You also need to complete the following tasks for the `main` function in the `main.cpp` file.
* 4.1. Declare a Shape-typed pointer `ptr`, which will be used to point to an object of `Circle` or `Rectangle`.
* 4.2. Create an object of `Circle` or `Rectangle` based on the user selection:
  * If `sel` is 0: Create a `Circle`-typed object and have `ptr` point to this object.
  * If `sel` is not 0: Create a `Rectangle`-typed object and have `ptr` point to this object.
* 4.3. Call the `display` function of the object pointed to by `ptr` to output the relevant information about the shape.
* 4.4. Use the `delete` operator to free the memory allocated for the object pointed to by `ptr`.


# Compile and Test

1. Type the following commands on Terminal.

```
g++ -o main *.cpp *.h
```
```
./main
```

2. Here are example inputs and outputs:

```
Enter the shape [0 for circle or 1 for rectangle]: 0
Enter the radius of a circle: 1.2
== Circle ==
radius   : 1.2
area     : 4.52389
perimeter: 7.53982
```

```
Enter the shape [0 for circle or 1 for rectangle]: 1
Enter the width and height of a rectangle: 1.2 3.4
== Rectangle ==
width    : 1.2
height   : 3.4
area     : 4.08
perimeter: 9.2
```


# Submit

Please upload your `shape.h` and `main.cpp` files (two files) to `myCourses > Assignments > HW9`. Do not submit *.docx, *.pdf, *.txt, or *.zip file.
