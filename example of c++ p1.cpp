

// C++ is a powerful, cross-platform programming language that extends the capabilities of the original C language. Developed by Bjarne Stroustrup, C++ provides high performance, control over system resources, and memory management



// --------------------------Examples--------------------------:


// ------------  1  ------------

// ------------User-Defined Function:

// A function is a block of code that performs a specific task. Here’s an example of a simple user-defined function that prints “Hello there!”:

#include <iostream>
using namespace std;

void greet() {
    cout << "Hello there!";
}

int main() {
    greet();
    return 0;
}

// ------------  2  ------------

// ------------Function with Parameters:

// Functions can take parameters. Here’s an example that displays an integer and a double:

#include <iostream>
using namespace std;

void displayNum(int n1, float n2) {
    cout << "The int number is " << n1;
    cout << "The double number is " << n2;
}

int main() {
    int num1 = 5;
    double num2 = 5.5;
    displayNum(num1, num2);
    return 0;
}


// ------------  3  ------------

// ------------For Loop:

// A for loop is used to repeat a block of code a specific number of times. Here’s an example that prints numbers from 1 to 5:

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    return 0;
}

// ------------  4  ------------

// ------------While Loop:

// A while loop repeats a block of code while a condition is true. Example:

#include <iostream>
using namespace std;

int main() {
    int count = 0;
    while (count < 5) {
        cout << "Hello World! ";
        ++count;
    }
    return 0;
}

// ------------  5  ------------

// ------------Arrays:

// Arrays store multiple values of the same data type. Example:

#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    cout << "Third element: " << numbers[2];
    return 0;
}

// ------------  6  ------------

// ------------Conditional Statements (if-else):

// Use if and else to make decisions in your program. Example:

#include <iostream>
using namespace std;

int main() {
    int age = 18;
    if (age >= 18) {
        cout << "You are an adult.";
    } else {
        cout << "You are not an adult yet.";
    }
    return 0;
}

// ------------  7  ------------

// ------------Switch Statement:

// A switch statement allows you to choose between different cases. Example:

#include <iostream>
using namespace std;

int main() {
    int day = 3;
    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        default:
            cout << "Other day";
    }
    return 0;
}

// ------------  8  ------------

// ------------Pointers:

// Pointers store memory addresses. Example:

#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = #
    cout << "Value at address " << ptr << ": " << *ptr;
    return 0;
}

// ------------  9  ------------

// ------------Classes and Objects:

// C++ supports object-oriented programming. Example:

#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.length = 5;
    rect.width = 3;
    cout << "Area: " << rect.area();
    return 0;
}

// ------------  10  ------------

// ------------Enums:

// Enums define named constants. Example:

#include <iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };

int main() {
    Color myColor = GREEN;
    cout << "Selected color: " << myColor;
    return 0;
}



