#include <floating_cmp.h>
#include <iostream>

using namespace rct;

int main() {
    std::cout << floating_cmp(1.0, 0.0) << std::endl;
    std::cout << floating_cmp(1.0, 1.0) << std::endl;
    std::cout << floating_cmp(1.0, 2.0) << std::endl;
  
    std::cout << floating_cmp(1.0f, 0.0) << std::endl;
    std::cout << floating_cmp(1.0, 1.0f) << std::endl;
    std::cout << floating_cmp(1, 2) << std::endl;
}
