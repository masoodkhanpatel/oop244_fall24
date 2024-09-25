const int NG = 20;

class Student {
    int no;
    float grade[NG];
    int ng;
    
public:
    Student(); // default constructor
    Student(int, const float*, int);
    ~Student(); // default destructor
    void copyFrom(const Student&);
    void set(int, const float*, int);
    void display() const;

    Student copy();

    Student& operator <<(const Student&);
  
};

