#include <iostream>

// int main()
// {
//     int x { 2147483647 };
//     std::cout << x << '\n';

//     x = x + 1;
//     std::cout << x << '\n';

//     return 0;
// }


// int main()
// {
//     std::cout << -8 /5 << '\n';

//     return 0;
// }


// int main()
// {
//     unsigned short x { 65535 };
//     std::cout << x << '\n';

//     x = 65536;
//     std::cout << x << '\n';

//     x = 65537;
//     std::cout << x << '\n';

//     return 0;
// }


// int main()
// {
//     unsigned short x { 0 };
//     std::cout << x << '\n';

//     x = -1;
//     std::cout << x << '\n';

//     x = -2;
//     std::cout << x << '\n';

//     return 0;
// }

// #include <cstdint>

// int main()
// {
//     std::int8_t x { 65 };
//     std::cout << x << '\n';

//     return 0;
// }


// #include <iostream>
// #include <limits>

// int main()
// {
//     std::cout << std::boolalpha; // print bool as true or false rather than 1 or 0
//     std::cout << "float: " << std::numeric_limits<float>::is_iec559 << '\n';
//     std::cout << "double: " << std::numeric_limits<double>::is_iec559 << '\n';
//     std::cout << "long double: " << std::numeric_limits<long double>::is_iec559 << '\n';
// }

// #include <iostream>

// int main()
// {
//     std::cout << 9.87654321f << '\n';
//     std::cout << 987.654321f << '\n';
//     std::cout << 987654.321f << '\n';
//     std::cout << 9876543.21f << '\n';
//     std::cout << 0.0000987654321f << '\n';

//     return 0;
// }


// #include <iomanip> // for output manipulator std::setprecision()
// #include <iostream>

// int main()
// {
//     std::cout << std::setprecision(17); // show 17 digits of precision
//     std::cout << 3.33333333333333333333333333333333333333f <<'\n'; // f suffix means float
//     std::cout << 3.33333333333333333333333333333333333333 << '\n'; // no suffix means double

//     return 0;
// }


// #include <iomanip> // for std::setprecision()
// #include <iostream>

// int main()
// {
//     float f { 123456789.0f }; // f has 10 significant digits
//     std::cout << std::setprecision(9); // to show 9 digits in f
//     std::cout << f << '\n';

//     return 0;
// }


#include <iostream>

int main()
{
	bool b{};
	std::cout << "Enter a boolean value: ";

	// Allow the user to input 'true' or 'false' for boolean values
	// This is case-sensitive, so True or TRUE will not work
	std::cin >> std::boolalpha;
	std::cin >> b;

	// Let's also output bool values as `true` or `false`
	std::cout << std::boolalpha;
	std::cout << "You entered: " << b << '\n';

	return 0;
}
