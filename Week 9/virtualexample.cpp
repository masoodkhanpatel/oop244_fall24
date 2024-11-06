//#include <iostream>
//
//// abstract class, because im not creating any objects
//class Transport {
//	int seriolNo;
//	int height;
//	int width;
//	public:
//		// virtual -> pure virtual function by adding "= 0"
//		virtual void moves() = 0;
//};
//
//class Jet :public Transport {
//public:
//	void moves() {
//		std::cout << "Jet flies.\n";
//	}
//};
//
//class Ship :public Transport {
//public:
//	void moves() {
//		std::cout << "Ship sails.\n";
//	}
//};
//
//
//void journey(Transport& t) {
//	t.moves();
//}
//
//int main() {
//	Jet myJet;
//	Ship govShip;
//	Transport t;
//
//	journey(myJet);
//	journey(govShip);
//}