#pragma once

namespace foo {

class Result {
private:
    const int status;
    const float value;

public:
    Result(float value, int status);

    void print() const;
};

}