//// Inline Functions - Separate
//// inline_2.h
//
//const int NG = 20;
//
//struct Student {
//private:
//    int no;
//    float grade[NG];
//    int ng;
//public:
//    void set(int n, const char* g);
//    const float* getGrades() const;
//};
//const float* Student::getGrades()
//const {
//    return grade;
//}
//
//int main() {
//	Student s;
//	s.set(3, "AAB");
//	const float* grades = s.getGrades();
//	return 0;
//}