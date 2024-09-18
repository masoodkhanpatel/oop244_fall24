struct Transaction {
    int acct;      // account number
    char type;     // credit 'c' debit 'd'
    double amount; // transaction amount
};

void enter(Transaction*); // *(&tr) -> tr
void display(Transaction*);
void add(double*, Transaction*);