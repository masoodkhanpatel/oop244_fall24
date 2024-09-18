// Fixed Format
// fixed.cpp

#include <iostream>
#include "Student.h"
using namespace std;

int main() {
    Student harry;
    float g[] = { 1.9f, 3.2f };

    harry.set(975, g, 2);
    harry.display();
}