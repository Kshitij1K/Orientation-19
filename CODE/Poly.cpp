#include <bits/stdc++.h>

void func (int y){
    std::cout << y << std::endl;
}

int func (int y, int z){
    std::cout << z+y << std::endl;
    return z+y;
}

void func2 (int k, float z){
    std::cout << "Int val is first, Float second. The values are " << k << " and " << z;
}

void func2 (float z, int k){
    std::cout << "Float val is first, Int second. The values are " << z << " and " << k;
}

void func3 (float k){
    std::cout << "Float " << k;
}

void func3(int k){
    std::cout << "Int " << k;
}

int main(){
    func (2);
    int c = func (2,3);
    std::cout << c << std::endl;

    func2 (2,9.34);
    std::cout << std::endl;
    func2 (2.9, 2);
    std::cout << std::endl;
    func3 (float(2.9));
    func3 (3);
    return 0;
}