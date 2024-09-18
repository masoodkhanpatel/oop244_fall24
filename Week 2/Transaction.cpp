#include <iostream>
#include "Transaction.h"

using namespace std;


void add(double* bal, const Transaction* tr) {
    *bal += (tr->type == 'd' ? -tr->amount : tr->amount);
}

void display(Transaction* tr) {
    cout << "Account " << tr->acct << endl;
    cout << (tr->type == 'd' ? " Debit $" : " Credit $") << endl;
    cout << tr->amount << endl;
}