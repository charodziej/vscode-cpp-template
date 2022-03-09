#include <catch2/catch_test_macros.hpp>
#include "Stack/Stack.h"

TEST_CASE("stack_test_1")
{
    Stack stack;
    stack.push(5);
    REQUIRE(stack.pop() == 25);
}
