#include <bits/stdc++.h>

class Complex_num{
    public:
    float real;
    float complex;

    Complex_num(float x, float y){
        (*this).real = x;
        (*this).complex = y;
        std::cout << "The complex number is " << x << "+i" << y << std::endl;
    }

    Complex_num(float x){
        (*this).real = x;
        (*this).complex = x;
        std::cout << "The complex number is " << real << "+i" << complex << std::endl;
    }

    ~Complex_num(){
        std::cout << "Deleting number " << real << "+i" << complex << std::endl;
    }
};

int main(){
    Complex_num num1(2,3);
    Complex_num num2(1);
    return 0;
}