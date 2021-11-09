#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>



class Fixed {

public:
    Fixed();
    ~Fixed();
    Fixed(int const val);
    Fixed(const Fixed &otherFixed);

    void set_Fixed(int val);
    int get_Fixed(void);
    Fixed& operator=(Fixed other);


private:
    int _val;
    static const int _fracional_bits = 8;
};

#endif