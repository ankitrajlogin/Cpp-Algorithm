
/*
A memory leak occurs when a program allocates memory dynamically (e.g., using new in C++ or malloc() in C) but fails to release it back to the system when it is no longer needed (e.g., by not calling delete in C++ or free() in C). As a result, the allocated memory remains occupied even though the program no longer needs it, leading to inefficient memory usage and, over time, can exhaust the available memory.

Causes of Memory Leaks:
Failure to Deallocate Memory: If dynamically allocated memory is not deallocated when it is no longer required, it will cause a memory leak.
Lost Pointer References: If all pointers to a block of dynamically allocated memory are lost or overwritten before freeing the memory, the memory remains allocated but inaccessible.
Circular References: In cases of complex data structures like linked lists or graphs, improper handling of circular references can prevent memory from being freed.
Consequences of Memory Leaks:
Increased Memory Usage: The program will consume more and more memory over time, which can reduce the performance of the system.
Program Crash: If the memory leak is severe enough, the program may run out of memory and crash.
System Instability: Large memory leaks in long-running programs (e.g., servers) can eventually affect the entire system's performance.
*/

#include <iostream>

void createMemoryLeak() {
    int* ptr = new int(42);  // Dynamically allocate memory for an integer
    // Forgetting to delete the allocated memory causes a memory leak
}

void avoidMemoryLeak() {
    int* ptr = new int(42);  // Dynamically allocate memory
    std::cout << *ptr << std::endl;  // Use the allocated memory
    delete ptr;  // Properly deallocate the memory
}

int main() {
    createMemoryLeak();  // Memory is allocated but not deallocated
    return 0;
}
