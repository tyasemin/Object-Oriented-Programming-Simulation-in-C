#include "shares.h"
#include <stdio.h>

Shares Share() {
	Shares this;
	this = (Shares)malloc(sizeof(struct SHARES));
	this->shareId = &set_id;
	this->shareName = &set_name;
	this->sharePrice = &set_price;
	this->shareSymbol = &set_symbol;

	this->GetShareId = &get_id;  //link
	this->GetShareName = &get_name;
	this->GetSharePrice = &get_price;
	this->GetShareSymbol = &get_symbol;

	this->SetShareId = &set_id; //link
	this->SetShareName = &set_name;
	this->SetSharePrice = &set_price;
	this->SetShareSymbol = &set_symbol;

	this->PrintShare = &print_share;

	return this;
}

char* get_id(Shares this) { //get
	return this->shareId;
}

char* get_name(Shares this) { //get
	return this->shareName;
}

float* get_price(Shares this) { //get
	return this->sharePrice;
}

char* get_symbol(Shares this) { //get
	return this->shareSymbol;
}


void set_id(Shares this, char* id) { //set
	this->shareId = id;
}
void set_name(Shares this, char* name) { //set
	this->shareName = name;
}
void set_symbol(Shares this, char* symbol) { //set
	this->shareSymbol = symbol;
}
void set_price(Shares this, float *price) { //set
	this->sharePrice = price;
}

void print_share(Shares this) {
	printf("Share name.....:%s\n", this->shareName);
	printf("Share symbol..:%s\n", this->shareSymbol);
	printf("Share id...:%s\n", this->shareId);
	printf("Share price:%.2f\n", *this->sharePrice);

}