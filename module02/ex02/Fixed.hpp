#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <cmath>


class Fixed {

public:
    Fixed();
    ~Fixed();
    Fixed(int const val);
    Fixed(float const val);

    Fixed(const Fixed &otherFixed);

    void set_Fixed(int val);
    int get_Fixed(void);
    Fixed& operator=(Fixed other);
    bool operator>(Fixed other);
    bool operator<(Fixed other);
    bool operator>=(Fixed other);
    bool operator<=(Fixed other);
    bool operator==(Fixed other);
    bool operator!=(Fixed other);

    Fixed operator+(Fixed const &other);
    Fixed operator-(Fixed const &other);

	float toFloat(void) const;
	int toInt(void) const;

private:
    int _val;
    static const int _fracional_bits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &refFixed);
#endif