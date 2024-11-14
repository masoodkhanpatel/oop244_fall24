#ifndef peron_defined

class Person {
	int age;
	char* name;
	void deepCopy(const Person&);
public:
	Person();
	Person(const char*);
	Person(const char*, int);
	~Person();

	// copy constructor
	Person(const Person&);

	// copy assignment
	Person& operator=(const Person&);

	// display class name
	virtual void display() const = 0;
};

#define peron_defined
#endif 


