
/*
1. Heap Segment:
The Heap is a region of memory used for dynamic memory allocation. This segment is managed at runtime, and memory is allocated and deallocated manually by the programmer using functions like malloc, calloc, realloc, and free in C, or new and delete in C++. Objects and data that need to persist beyond the scope of a function are typically allocated on the heap.

2. Stack Segment:
The Stack is a region of memory used for storing local variables, function parameters, and return addresses. This memory is managed automatically by the compiler, and data is allocated and deallocated in a Last In, First Out (LIFO) manner. Each function call creates a new "stack frame" that holds the function's local variables and parameters.

3. Static/Global Segment:
The Static/Global segment is used for storing global variables and static variables. These variables have a fixed memory location throughout the execution of the program. Global variables are accessible from any function in the program, while static variables maintain their value between function calls.

4. Code (Text) Segment:
The Code (Text) segment contains the actual compiled code (machine instructions) of the program. This segment is typically read-only to prevent accidental modification of the code during execution. It includes the executable instructions and can also include constants, such as string literals.


+-------------------------+
|    Code (Text) Segment   |  --> Stores program instructions (read-only)
+-------------------------+
|  Static/Global Segment   |  --> Stores global and static variables
+-------------------------+
|        Heap Segment      |  --> Dynamically allocated memory (grows upwards)
+-------------------------+
|        Stack Segment     |  --> Local variables, function calls (grows downwards)
+-------------------------+

Summary of Memory Segments:
1. Heap: For dynamic memory allocation, manually managed, flexible but slower.

2. Stack: For local variables and function calls, automatically managed, fast but limited size.

3. Static/Global: For global and static variables, persistent throughout the program, fixed size.

4. Code (Text): Contains the compiled program instructions, read-only, fixed size.
*/