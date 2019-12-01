#include <bits/stdc++.h>

class student{
    private:
    int JEE_rank;
    
    protected:
    int joining_year;

    public:
    std::string name;
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
        //std::cout << JEE_rank;
    }
};

class A: public iit_student{
    public:
    void func (){
        std::cout << joining_year;
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
    //std::cout << J.JEE_rank << J.joining_year << J.name;
    J.iit_name_set("Kanpur");
    J.print_details();
    J.student::print_details();
    return 0;
}