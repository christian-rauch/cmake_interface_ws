#include <result.hpp>
#include <iostream>

namespace foo {

Result::Result(float value, int status) : value(value), status(status)
{
}

void Result::print() const {
    std::cout << "result: " << value << " (status: " << status << ")" << std::endl;
}

}