#include <bits/stdc++.h>

class shape{
    protected:
    int width;
    int height;

    public:
    shape(){                    //Default Constructor needed when defining user-defined constructor

    }
    shape(int w, int h){
        width = w;
        height = h;
    }
};

class rect: public shape{
    public:
    rect(int w, int h){
        width = w;
        height = h;
    }
    void area(){
        std::cout << width*height << std::endl;
    }
};

int main(){
    rect A(2,5);
    A.area();
    return 0;
}