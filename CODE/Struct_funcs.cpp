#include <bits/stdc++.h>

struct complex_num{
    private:
    float real = 1;
    float complex = 1;

    public:
    void modulus(){
        std::cout << "The modulus of this number is " << sqrt(pow(real,2)+pow(complex,2)) << std::endl;
    }
};

int main(){
    struct complex_num k;
    k.modulus();
    return 0;
}