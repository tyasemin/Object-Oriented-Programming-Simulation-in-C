#ifndef SHARES_H
#define SHARES_H

#include <string>

using namespace std;

class Shares
{
private:
	string shareId;
	string shareName;
	string shareSysmbol;
	float  sharePrice;

public:
	Shares* next;
	Shares(); //constructor
	~Shares(); //destructor

	

	string GetShareId(Shares *share);
	string GetShareName(Shares *share);
	string GetShareSymbol(Shares *share);
	float GetSharePrice(Shares *share);

	void SetShareId(Shares *share, string id);
	void SetShareName(Shares *share, string name);
	void SetShareSymbol(Shares *share, string symbol);
	void SetSharePrice(Shares* share, float price);

	void PrintShare(Shares* share);
};

#endif
