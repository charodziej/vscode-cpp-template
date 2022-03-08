#include <iostream>
#include "Stack/Stack.h"
#include "Square/Square.h"

int main(int, char **)
{
    std::cout << "Hello, world!\n";
    Stack stack;
    stack.push(4);
    stack.push(2);
    int i;
    i = stack.pop();
    i = stack.pop();

    std::cout << square(50) << std::endl;
}
