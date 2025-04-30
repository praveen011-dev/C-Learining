C++
==============================================================
1. Platform Dependent
Meaning: C++ code may not work the same on different computers or systems unless recompiled.
Example: A program you write in Windows might need changes or a different setup to run on Linux.

==============================================================

2. Object Oriented
Meaning: C++ lets you create objects (like real-world items) using classes.
Example:

class Car {
public:
    void start() {
        cout << "Car started!" << endl;
    }
};

Car myCar;
myCar.start();  // Output: Car started!

=============================================================


3. Statically Typed
Meaning: You must tell C++ what type of data a variable will store before using it.
Example:

int age = 20;   // You must say 'int' for an integer


=============================================================

4. Speed
Meaning: C++ runs fast and is good for making games, system tools, etc.
Example: Programs like video games and browsers (like Chrome) use C++ for speed.

=============================================================

5. Pointers
Meaning: Pointers store memory addresses and let you control memory directly.
Example:

int num = 10;
int* ptr = &num;
cout << *ptr;  // Output: 10