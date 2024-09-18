#include <iostream>
using namespace std;

const int N_CHARS = 31;

struct Student {
    int no;
    double grade;
    char name[N_CHARS];// 31 + 12 = 43;
};

struct dummy {
    int a;
    char b;
};

int main() {
    dummy d;
    std::cout << sizeof(d) << "\n";

    Student s1;
    std::cout << sizeof(s1) << "\n";

    Student* s2 = new Student();
    std::cout << sizeof(s2) << "\n";

    Student* s3 = new Student();
    delete s2;
}