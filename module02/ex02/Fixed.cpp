
#include "Fixed.hpp"

Fixed::Fixed(){
    // std::cout << "Default constructor called\n";
    _val = 0;
}
Fixed::Fixed(int const val){
    // std::cout << "Int constructor called\n";
	this->_val = (val << Fixed::_fracional_bits);
}
Fixed::Fixed(float const val){
    // std::cout << "Float constructor called\n";
	this->_val = roundf(val * (1 << Fixed::_fracional_bits));
}


Fixed::~Fixed(){
    // std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &otherFixed){
    // std::cout << "Copy constructor called\n";
    _val = otherFixed._val;
}

void Fixed::set_Fixed(int val)
{
    _val = val;
}

int Fixed::get_Fixed(void) const
{   
    return (_val);
}

Fixed& Fixed::operator=(Fixed other) 
{
    // std::cout << "Assignation operator called\n";

    this->_val = other._val;
    return *this;
} 
std::ostream &operator<<(std::ostream &out, Fixed const &refFixed)
{
    // write obj to stream
    out << refFixed.toFloat();
    return out;
}

bool Fixed::operator>(Fixed other){
    return (this->get_Fixed() < other.get_Fixed());
}

bool Fixed::operator<(Fixed other){
    return (this->get_Fixed() < other.get_Fixed());
}

bool Fixed::operator<=(Fixed other){
    return (this->get_Fixed() <= other.get_Fixed());
}

bool Fixed::operator>=(Fixed other){
    return (this->get_Fixed() >= other.get_Fixed());
}

bool Fixed::operator==(Fixed other){
    return (this->get_Fixed() == other.get_Fixed());
}

bool Fixed::operator!=(Fixed other){
    return (this->get_Fixed() != other.get_Fixed());
}

Fixed Fixed::operator+(Fixed const &other)
{
	Fixed val(*this);

	val.set_Fixed(this->get_Fixed() + other.get_Fixed());
	return (val);
}

Fixed Fixed::operator-(Fixed const &other)
{
	Fixed val(*this);

	val.set_Fixed(this->get_Fixed() - other.get_Fixed());
	return (val);
}
Fixed Fixed::operator*(Fixed const &other)
{
	Fixed val(*this);

	val.set_Fixed(this->get_Fixed() * other.get_Fixed());
	return (val);
}

Fixed Fixed::operator/(Fixed const &other)
{
	Fixed val(*this);

	val.set_Fixed(this->get_Fixed() / other.get_Fixed());
	return (val);
}

Fixed& Fixed::operator++()
{
    this->_val++;
   return *this;
}

// Define postfix increment operator.
Fixed Fixed::operator++(int)
{
   Fixed temp = *this;
    operator++();
   return temp;
}
Fixed& Fixed::operator--()
{
    this->_val--;
   return *this;
}

// Define postfix increment operator.
Fixed Fixed::operator--(int)
{
   Fixed temp = *this;
    operator--();
   return temp;
}
float Fixed::toFloat(void) const{
     return ((float)this->_val / (float)(1 << this->_fracional_bits));
}

int Fixed::toInt(void) const{
    return (this->_val >> this->_fracional_bits);
}