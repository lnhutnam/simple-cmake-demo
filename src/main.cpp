#include <iostream>
#include <functional>

int main() {
    [output = std::ref(std::cout << "Hello ")](){output.get() << "world!."; }();
    return 0;
}