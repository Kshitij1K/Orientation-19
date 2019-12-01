#include <bits/stdc++.h>

class student{
    public:
    std::string name;
    int joining_year;

    void set(std::string name_inp){
        name = name_inp;
    }

    void set (int join_year){
        joining_year = join_year;
    }

    void print_details(){
        std::cout << name << " joined in the year " << joining_year << std::endl;
    }
};

class iit_student: public student{
    public:
    std::string name_of_iit;
    void iit_name_set(std::string name){
        name_of_iit = name;
    }

    void print_details(){
        std::cout << name << " joined in the year " << joining_year << " and studies at IIT " << name_of_iit << std::endl;
    }
};

int main(){
    student K;
    K.set("Kshitij Kabeer");
    K.set (2018);
    K.print_details();

    iit_student J;
    J.set("Kshitij Kabeer");
    J.set (2018);
    J.iit_name_set("Kanpur");
    J.print_details();
    J.student::print_details();
    return 0;
}