#include "Fixed.hpp"

int main ()
{
Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << a.get_Fixed() << std::endl;
std::cout << b.get_Fixed() << std::endl;
std::cout << c.get_Fixed() << std::endl;
return 0;
}