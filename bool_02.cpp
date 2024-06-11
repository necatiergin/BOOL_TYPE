#include <iostream>

bool b1;

int main()
{
	std::cout << std::boolalpha;

	std::cout << "b1 = " << b1 << '\n';
	bool b2{};
	std::cout << "b2 = " << b2 << '\n';
	bool b3 = 23;
	std::cout << "b3 = " << b3 << '\n';
	bool b4 = -5;
	std::cout << "b4 = " << b4 << '\n';
	int x{};
	bool b5 = &x;
	std::cout << "b5 = " << b5 << '\n';
	int* p{ nullptr };
	bool b6 = p;
	std::cout << "b6 = " << b6 << '\n';
}
