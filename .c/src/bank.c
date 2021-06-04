#include "bank.h"
#include "Shares.h"

#include <stdio.h>


Bank Bankk() {  //constructor
	Bank this;
	this = (Bank)malloc(sizeof(struct BANK));
	this->topOfList = NULL;
	this->endOfList = NULL;
	this->numberOfShares = 0;


	this->PrintBank = &printBank;
	this->GetShareNumber = &getShareNumber;
	this->AddShare = &addShare;
	this->DeleteShareList = &deleteShareList;
}

void printBank(Bank bank) { //print
	Shares tmp = bank->topOfList;

	if (tmp == NULL) {
		printf("There is no share in this bank!\n");
	}

	else {
		while (tmp != NULL) {
			tmp->PrintShare(tmp);
			printf("\n");
			tmp = tmp->next;
		}

	}
	free(tmp);

}

int getShareNumber(Bank bank) { //number of shares in bank
	return bank->numberOfShares;
}

Bank addShare(Bank bank, Shares share) {  //add share to the bank as a linked list member
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

void deleteShareList(Bank bank) {
	Shares tmp= bank->topOfList;
	while (bank->numberOfShares!=0) {
	
	   tmp = bank->topOfList;
       bank->topOfList = bank->topOfList->next;
	   bank->numberOfShares = bank->numberOfShares - 1;
	   tmp->DeleteShare(tmp);
	}
	
}

