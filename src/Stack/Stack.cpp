#include "Stack.h"

#include <vector>
#include "../Square/Square.h"

void Stack::push(int value)
{
    values.push_back(value);
}

int Stack::pop()
{
    int value = values.back();
    values.pop_back();

    return square(value);
}