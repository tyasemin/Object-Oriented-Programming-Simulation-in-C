#ifndef BANK_H
#define BANK_H

#include "shares.h"

struct  BANK
{


	int numberOfShares;

	struct SHARES* topOfList;
	struct SHARES* endOfList;
	
	

	void (*PrintBank)(struct BANK* bank);
	int (*GetShareNumber)(struct BANK* bank);

	struct BANK* (*AddShare) (struct BANK* bank, struct SHARES* share);
	void (*DeleteShareList)(struct BANK* bank);

};
typedef struct BANK* Bank;
Bank Bankk();
void printBank(Bank bank);
int getShareNumber(Bank bank);
Bank addShare(Bank bank, Shares share);
void deleteShareList(Bank bank);

#endif
