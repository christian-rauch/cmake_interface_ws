#include <cstdlib>
#include <result.hpp>

int main(int argc, char const *argv[]) {
    const foo::Result res(6.2, 0);
    res.print();
    return EXIT_SUCCESS;
}
