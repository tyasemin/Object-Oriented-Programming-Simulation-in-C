#include "Shares.h"
#include "Bank.h"
#include <string>
#include <iostream>

using namespace std;

int main() {

	Bank *newBank = new Bank();

	string CompanyNames[] = { "Company A","Company B","Company C" };
	string CompanySymbols[] = { "ACo","BCo","CCo" };
	string CompanyShareIds[] = { "Co101","Co202","Co303" };
	float CompanySharePrices[] = { 4.5f,6.7f,8.7f };

	for (int i = 0; i < 3; i++) {
		Shares *newShare = new Shares();
		newShare->SetShareName(newShare, CompanyNames[i]);
		newShare->SetShareId(newShare, CompanyShareIds[i]);
		newShare->SetShareSymbol(newShare, CompanySymbols[i]);
		newShare->SetSharePrice(newShare, CompanySharePrices[i]);

		newBank->AddShare(newBank, newShare);

	}
	cout<<("Shares In The Bank\n");
	cout<<("--------------------------------\n");

	newBank->PrintBank(newBank);

	cout<<("--------------------------------\n");

	cout<<("After the shares in the bank are deleted\n");

	newBank->DeleteShareList(newBank);
	newBank->PrintBank(newBank);














	system("pause");
	return 0;

}