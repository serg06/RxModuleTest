#include <iostream>
import "RxCpp/Rx/v2/src/rxcpp/rx.hpp";
//import RxModule;

rxcpp::observable<int> test;

namespace Rx {
    using namespace rxcpp;
}

Rx::observable<int> tmp;

int main()
{
    std::cout << "Hello World!\n";
}
