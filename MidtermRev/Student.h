class Student {
	int id;
public:
	Student(int val) {
		id = val;
	}
	~Student();
	friend std::ostream& operator<<(std::ostream& os, const Student& src);

};

void doSomething();