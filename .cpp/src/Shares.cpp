#include "Shares.h"
#include <iostream>
#include <string>


using namespace std;

Shares::Shares() {  //constructor
	this->shareName = shareName;
	this->shareId = shareId;
	this->sharePrice = sharePrice;
	this->shareSysmbol = shareSysmbol;

	this->next = NULL;
}

Shares::~Shares() {
}

string Shares::GetShareId(Shares* share) { //get
	return share->shareId;
}

string Shares::GetShareName(Shares* share) { //get
	return share->shareName;
}

float Shares::GetSharePrice(Shares* share) { //get
	return share->sharePrice;
}

string Shares::GetShareSymbol(Shares* share) { //get
	return share->shareSysmbol;
}

void Shares::SetShareId(Shares* share, string id) { //set
	share->shareId = id;
}

void Shares::SetShareSymbol(Shares* share, string symbol) { //set
	share->shareSysmbol = symbol;
}

void Shares::SetShareName(Shares* share, string name) { //set
	share->shareName = name;
}

void Shares::SetSharePrice(Shares* share, float price) {  //set
	share->sharePrice = price;
}

void Shares::PrintShare(Shares* share) {  //print
	cout << "Share Name......:" << share->shareName << endl;
	cout << "Share Symbol....:" << share->shareSysmbol << endl;
	cout << "Share Id........:" << share->shareId << endl;
	cout << "Share Price.....:" << share->sharePrice << endl;
}