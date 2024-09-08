//#include <iostream>
//
//// Program using inheritance and polymorphism
//
//class Shape {
//public:
//    virtual double area() { return 0; }
//    virtual void print() {}
//};
//
//// Derived class - Circle
//class Circle : public Shape {
//private:
//    double radius;
//
//public:
//    Circle(double r) : radius(r) {}
//
//    double area()   {
//        return 3.14159 * radius * radius;
//    }
//
//    void print()   {
//        std::cout << "Circle with radius " << radius << std::endl;
//    }
//};
//
//// Derived class - Rectangle
//class Rectangle : public Shape {
//private:
//    double width, height;
//
//public:
//    Rectangle(double w, double h) : width(w), height(h) {}
//
//    double area()  {
//        return width * height;
//    }
//
//    void print()  {
//        std::cout << "Rectangle with width " << width << " and height " << height << std::endl;
//    }
//};
//
//void display(Shape& s) {
//    s.print();
//    std::cout << " and the area is " << s.area() << "\n";
//}
//
//int main() {
//    Circle c(2.5);
//    Rectangle r(3, 4);
//
//    display(c);
//    display(r);
//
//    return 0;
//}