#pragma once

#include <vector>

class Stack
{
private:
    std::vector<int> values;

public:
    void push(int value);

    int pop();
};