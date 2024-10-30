// Derived Classes
// derived.cpp

#include <iostream>
#include "Student.h"

int main() {
    float gh[] = { 89.4f, 67.8f, 45.5f };



    //Student harry1(1234, gh, 3); // calling 3-arg constructor
    Student harry2("HARRY", 1234, gh, 3); // calling 4-arg constructor



    // harry.set("Harry");           // inherited
    //// harry.displayName(std::cout); // inherited

    //harry.display(std::cout);     // not inherited
    //harry.Person::display(std::cout);
    //harry.Mammal::display(std::cout);

}