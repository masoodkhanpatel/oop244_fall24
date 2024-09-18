//// One Definition Rule
//// one_defintion_rule.cpp
//
//#include <iostream>
//#include "main.h"        // prototype for add()
//#include "Transaction.h" // prototypes for enter() and display()
//using namespace std;
//
//const int NO_TRANSACTIONS = 2;
//
//int global = 9.99;
//
//int main() {
//    /*int i;
//    double balance = 0.0;
//    Transaction tr;
//
//    for (i = 0; i < NO_TRANSACTIONS; i++) {
//        enter(&tr);
//        display(&tr);
//        add(&balance, &tr);
//    }
//    cout << "Balance " << balance << endl;*/
//
//    //for (int i = 0; i < 3; i++) {
//    //    int j = 2 * i;
//    //    cout << "The value of j is " << j << endl;
//    //}
//    //std::cout << global << "\n";
//
//
//    int i = 9;
//    {
//        int i = 5;
//        {
//            int i = 3;
//            std::cout << i << "\n";
//        }
//        std::cout << i << "\n";
//    }
//    std::cout << i << "\n";
//}
//
//int getGlobal() {
//    return global;
//}
