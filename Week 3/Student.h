const int NG = 5;

class Student {
	int no;          // student number
	float grade[NG]; // grades
	int ng;          // number of grades filled
public:
	void display() const;
	void set(int, const float*, int);
};

void doSomething();
