#include <iostream> 
  
using namespace std; 
  
class Distance { 
public: 
    // Member Object 
    int feet, inch; 
    // No Parameter Constructor 
    Distance() 
    { 
        this->feet = 0; 
        this->inch = 0; 
    } 
  
    // Constructor to initialize the object's value 
    // Parametrized Constructor 
    Distance(int f, int i) 
    { 
        this->feet = f; 
        this->inch = i; 
    } 
  
    // Overloading (+) operator to perform addition of 
    // two distance object 
    Distance operator+(Distance& d2) // Call by reference 
    { 
        // Create an object to return 
        Distance d3; 
  
        // Perform addition of feet and inches 
        d3.feet = this->feet + d2.feet + (this->inch + d2.inch)/12; 
        d3.inch = (this->inch + d2.inch)%12; 
  
        // Return the resulting object 
        return d3; 
    } 

    void operator-() 
    { 
        feet--; 
        inch--; 
        cout << "\nFeet & Inches(Decrement): " << feet << "'" << inch; 
    } 
}; 
  
// Driver Code 
int main() 
{ 
    // Declaring and Initializing first object 
    Distance d1(8, 9); 
  
    // Declaring and Initializing second object 
    Distance d2(10, 11); 
  
    // Declaring third object 
    Distance d3; 
  
    // Use overloaded operator 
    d3 = d1 + d2; 
  
    // Display the result 
    cout << "\nTotal Feet & Inches: " << d3.feet << "'" << d3.inch; 

    -d3;
    return 0; 
} 