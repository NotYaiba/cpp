
#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called\n";
    _val = 0;
}
Fixed::Fixed(int const val){
    std::cout << "constractor called !\n";
    _val = val;
}


Fixed::~Fixed(){
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &otherFixed){
    std::cout << "Copy constructor called\n";
    _val = otherFixed._val;
}

void Fixed::set_Fixed(int val)
{
    std::cout << "set_fixed function called\n";
    
    _val = val;
}

int Fixed::get_Fixed(void)
{   
    std::cout << "get_fixed function called\n";

    return (_val);
}

Fixed& Fixed::operator=(Fixed other) 
{
    std::cout << "Assignation operator called\n";

    this->_val = other._val;
    return *this;
} 