#pragma once

#include <result.hpp>

namespace foo {

class ComputeInterface
{
public:
    virtual Result compute(const float a, const float b) = 0;
};

}