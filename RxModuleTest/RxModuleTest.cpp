#include <iostream>
import RxModule;

namespace Rx {
	using namespace rxcpp;
	using namespace rxcpp::sources;
	using namespace rxcpp::operators;
	using namespace rxcpp::util;
}

int main()
{
	Rx::range(0, 10).subscribe([](int i) {
        std::cout << "Hello world " << i << "\n";
        });
}
