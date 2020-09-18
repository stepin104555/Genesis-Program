
#ifndef _acc_h
#define _acc_h

#include<string>
using namespace std;

class Account {
	int m_accNumber;
	string m_accName;
	double m_balance;

public:
	Account();
	Account(int, string, double);
	Account(int, string);
	Account(const Account&);
	void debit(double);
	void credit(double);
	double getBalance() ;
	void display();
};



#endif




