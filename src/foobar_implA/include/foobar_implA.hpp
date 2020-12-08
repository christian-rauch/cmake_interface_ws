#pragma once

#include <foobar_interface.hpp>

namespace foo {

class FooBarImplA : ComputeInterface
{
public:
    FooBarImplA(/* args */);

    ~FooBarImplA();

    virtual Result compute(const float a, const float b) override;
};

}