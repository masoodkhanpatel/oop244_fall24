//// getPosInt extracts a positive integer <= max
//// from standard input and returns its value
////
//
//#include <iostream>
//using namespace std;
//
//int getPosInt(int max) {
//    int value;
//    int keepreading;
//
//    keepreading = 1;
//    do {
//        cout << "Enter a positive integer (<= " << max << ") : ";
//        cin >> value;
//
//        if (cin.fail()) {   // check for invalid character
//            cerr << "Invalid character.  Try Again." << endl;
//            cin.clear();
//            cin.ignore(2000, '\n');
//        }
//        else if (value <= 0 || value > max) {
//            cerr << value << " is outside the range [1," <<
//                max << ']' << endl;
//            cerr << "Invalid input.  Try Again." << endl;
//            cin.ignore(2000, '\n');
//            // you may choose to omit this branch
//        }
//        else if (char(cin.get()) != '\n') {
//            cerr << "Trailing characters.  Try Again." << endl;
//            cin.ignore(2000, '\n');
//        }
//        else
//            keepreading = 0;
//    } while (keepreading == 1);
//
//    return value;
//}
//
//int main() {
//	int i;
//
//	i = getPosInt(100);
//	cout << "You entered " << i << endl;
//
//	i = getPosInt(10);
//	cout << "You entered " << i << endl;
//
//	i = getPosInt(5);
//	cout << "You entered " << i << endl;
//
//	return 0;
//}