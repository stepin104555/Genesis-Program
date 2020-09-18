
#include<iostream>  // i/o hadling header
#include "acc.h"   // including the user defined functions


//->>>>   ***      Constructors                     *****<<<<------

Account::Account() {   // Default constructor

	m_accNumber = 0;
	m_accName = "";
	m_balance = 0 ;
}

//

Account::Account(int id, string name, double bal){
	m_accNumber = id;
	m_accName=name;
	m_balance=bal;
}



Account::Account(int id, string name) {
	m_accNumber = id;
	m_accName = name;
	m_balance = 0;
}


Account::Account(const Account& ref){   // Copy constructor
	m_accNumber=ref.m_accNumber;
	m_accName=ref.m_accName;
	m_balance=ref.m_balance;

}



//----> Operations

void Account::credit(double amount) {
	m_balance += amount;
}

void Account::debit(double amount) {
	//min balance check
	m_balance -= amount;
}

double Account::getBalance()  {
	return m_balance;
}

void Account::display() {
	cout << m_accNumber << "," << m_accName << ","
		<< m_balance << "\n";
}
