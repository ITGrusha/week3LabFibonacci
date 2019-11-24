#include <iostream>

#include "FibX.hpp"

#define KEY_LENGTH 3

int main() {
    FibX FibSeq(KEY_LENGTH);
    for (int i = 0; i < 10; ++i) {
        long long elem = FibSeq.GetNextElement();
        std::cout << elem << std::endl;
    }
    return 0;
}
