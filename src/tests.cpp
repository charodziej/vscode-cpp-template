#include <gtest/gtest.h>
#include "Stack/Stack.h"

// TEST(name_of_test_group, name_of_specific_test)
TEST(my_project, stack_test_1)
{
    Stack stack;
    stack.push(5);
    ASSERT_EQ(stack.pop(), 25);
}
