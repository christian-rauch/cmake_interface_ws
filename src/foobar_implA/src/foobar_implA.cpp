#include <foobar_implA.hpp>

namespace foo {

FooBarImplA::FooBarImplA(/* args */)
{
}

FooBarImplA::~FooBarImplA()
{
}

Result FooBarImplA::compute(const float a, const float b) {
    const float sum = a + b;
    return Result(sum, 0);
}


}