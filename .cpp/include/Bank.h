#ifndef BANK_H
#define BANK_H

#include "Shares.h"

class Bank
{

private:
	int numberOfShares;
public:
	Shares* topOfList;
	Shares* endOfList;
	Bank();
	~Bank();

	void PrintBank(Bank *bank);
	int getShareNumber(Bank* bank);

	Bank* AddShare(Bank* bank, Shares* share);
	void DeleteShareList(Bank* bank);
};


#endif
