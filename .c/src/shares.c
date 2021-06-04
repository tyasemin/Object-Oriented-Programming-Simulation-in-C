#include "shares.h"
#include <stdio.h>

Shares Share() {
	Shares this;
	this = (Shares)malloc(sizeof(struct SHARES));
	this->shareId = &setId;
	this->shareName = &setName;
	this->sharePrice = &setPrice;
	this->shareSymbol = &setSymbol;
	this->next = NULL;

	this->GetShareId = &getId;  //link
	this->GetShareName = &getName;
	this->GetSharePrice = &getPrice;
	this->GetShareSymbol = &getSymbol;

	this->SetShareId = &setId; //link
	this->SetShareName = &setName;
	this->SetSharePrice = &setPrice;
	this->SetShareSymbol = &setSymbol;

	this->PrintShare = &printShare;
	this->DeleteShare = &deleteShare;
	return this;
}

char* getId(Shares this) { //get
	return this->shareId;
}

char* getName(Shares this) { //get
	return this->shareName;
}

float* getPrice(Shares this) { //get
	return this->sharePrice;
}

char* getSymbol(Shares this) { //get
	return this->shareSymbol;
}


void setId(Shares this, char* id) { //set
	this->shareId = id;
}
void setName(Shares this, char* name) { //set
	this->shareName = name;
}
void setSymbol(Shares this, char* symbol) { //set
	this->shareSymbol = symbol;
}
void setPrice(Shares this, float *price) { //set
	this->sharePrice = price;
}

void printShare(Shares this) {
	printf("Share name.....:%s\n", this->shareName);
	printf("Share symbol..:%s\n", this->shareSymbol);
	printf("Share id...:%s\n", this->shareId);
	printf("Share price:%.2f\n", *this->sharePrice);

}

void deleteShare(Shares this) {
	free(this);
}

