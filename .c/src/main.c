#include "shares.h"
#include <stdio.h>
#include "bank.h"
#include <string.h>

int main() {

	Bank newBank = Bankk();

	char *CompanyNames[] = { "Company A","Company B","Company C" };
	char* CompanySymbols[] = { "ACo","BCo","CCo" };
	char* CompanyShareIds[] = { "Co101","Co202","Co303" };
	float CompanySharePrices[] = {4.5f,6.7f,8.7f};

	for (int i = 0; i < strlen(CompanyNames); i++) {
		Shares newShare = Share();
		newShare->SetShareName(newShare, CompanyNames[i]);
		newShare->SetShareId(newShare, CompanyShareIds[i]);
		newShare->SetShareSymbol(newShare, CompanySymbols[i]);
		newShare->SetSharePrice(newShare, &CompanySharePrices[i]);

		newBank->AddShare(newBank,newShare);
		
	}
	printf("Shares In The Bank\n");
	printf("--------------------------------\n");

	newBank->PrintBank(newBank);

	printf("--------------------------------\n");

	printf("After the shares in the bank are deleted\n");

	newBank->DeleteShareList(newBank);
	newBank->PrintBank(newBank);

	free(newBank);

	return 0;
}
