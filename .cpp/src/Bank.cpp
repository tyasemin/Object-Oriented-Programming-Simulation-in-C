#include "Bank.h"
#include "Shares.h"

#include <iostream>


Bank::Bank() {  //constructor
	this->topOfList = NULL;
	this->endOfList = NULL;
	this->numberOfShares = 0;
}

Bank::~Bank() {  //destructor
}

void Bank::PrintBank(Bank *bank) { //print
	Shares* tmp = bank->topOfList;

	if (tmp == NULL) {
		cout << "There is no share in this bank!" << endl;
	}

	else {
		while (tmp != NULL) {
			
			tmp->PrintShare(tmp);
			cout << endl;
			tmp = tmp->next;
		}
	
	}

}

int Bank::getShareNumber(Bank *bank) { //number of shares in bank
	return bank->numberOfShares;
}

Bank* Bank::AddShare(Bank* bank, Shares* share) {  //add share to bank as a linked list member
	if (bank->topOfList == NULL) {
		bank->topOfList = share;
		bank->endOfList = share;
		bank->numberOfShares = bank->numberOfShares + 1;

	}
	
	else {
		bank->endOfList->next = share;
		bank->endOfList = share;
		bank->numberOfShares = bank->numberOfShares + 1;

	}
	return bank;
}

void Bank::DeleteShareList(Bank *bank) {
	Shares *tmp = bank->topOfList;
	while (bank->numberOfShares != 0) {

		tmp = bank->topOfList;
		bank->topOfList = bank->topOfList->next;
		bank->numberOfShares = bank->numberOfShares - 1;
		tmp->~Shares();
	}

}