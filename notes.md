# Day 01: Dynamic Memory Allocation and references (&)
## Some definitions
memory allocation comes in two varieties:
* **Static (compile time)**: Sizes and types of memory (including arrays) must be known at compile time.
* **Dynamic (run-time)**: Memory allocated at run time. Exact sizes (like the size of an array)
* can be variable. Dynamic memory doesn't have a name (names known by compiler), so pointers
* are used to link to this memory

**camelCase vs snake_case**
``
int my_variable_name; // separated by underscores/snake_case
int my_function_name(); // separated by underscores/snake_case

int myVariableName; // intercapped/CamelCase
int myFunctionName(); // intercapped/CamelCase
``
**Unary, Binary, Ternary Operators**
* Unary: operator that affects 1 operand such as *-* or *\**.
* Binary: operator that acts on 2 operands such as *+* or the extraction operator *>>* or the
insertion operator *<<*.
* Ternary: operator that acts on 3 operands such as *?*.
**Expression**
An expression is a combination of literals, variables, operators, and explicit function calls (not shown above) that produce a single output value. When an expression is executed, each of the terms in the expression is evaluated until a single value remains (this process is called evaluation). That single value is the result of the expression.
``
type identifier { expression }; -- syntax
int z{ (2 * 3) + 4 }; -- example
``
**Declaration vs Definition**
* A definition actually implements (for functions or types) or instantiates (for variables) the identifier.
* A declaration is a statement that tells the compiler about the existence of an identifier and its type information.
Examples:
``
// Definitions
int add(int x, int y) // implements function add()
{
    int z{ x + y }; // instantiates variable z

    return z;
}
``
``
// Declarations
int add(int x, int y); // tells the compiler about a function named "add" that takes two int parameters and returns an int.  No body!
int x; // tells the compiler about an integer variable named x
``

**Namespace**
A namespace is a region that allows you to declare names inside of it for the purpose of
disambiguation. The namespace provides a scope (called namespace scope) to the names declared
inside of it -- which simply means that any name declared inside the namespace won’t be mistaken
for identical names in other scopes. *std::* is the standard library namespace. 

**Headers and Compilation**
https://www.learncpp.com/cpp-tutorial/header-files/ 
https://www.learncpp.com/cpp-tutorial/header-guards/ 


## Variable Assignement and Initialization Examples
Initialization = The object is given a known value at the point of definition.
Assignment = The object is given a known value beyond the point of definition.
Uninitialized = The object has not been given a known value yet.
Examples
``
int x; // define an integer variable named x

int width; // define an integer variable named width
width = 5; // copy assignment of value 5 into variable width
// variable width now has value 5

int a; // no initializer
int b = 5; // initializer after equals sign -- copy init.
int c( 6 ); // initializer in parenthesis -- direct init.
int d { 7 }; // initializer in braces -- list init.
int width { 5 }; // direct list initialization of value 5 into variable width (preferred)
int height = { 6 }; // copy list initialization of value 6 into variable height
int depth {}; // value initialization -- default value init (0 or empty)
``

## Sources
* https://www.learncpp.com/ 
