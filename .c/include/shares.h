#ifndef SHARES_H
#define SHARES_H

struct SHARES {
	char* shareId;
	char* shareName;
	char* shareSymbol;
	float* sharePrice;

	struct SHARES* next;
	void (*DeleteShare)(struct SHARES*);

	char* (*GetShareId)(struct SHARES*);
	char* (*GetShareName)(struct SHARES*);
	char* (*GetShareSymbol)(struct SHARES*);
	float (*GetSharePrice)(struct SHARES*);

	void (*SetShareId)(struct SHARES*, char*);
	void (*SetShareName)(struct SHARES*, char*);
	void (*SetShareSymbol)(struct SHARES*, char*);
	void (*SetSharePrice)(struct SHARES*, float*);

	void (*PrintShare)(struct SHARES*);

	
};
typedef struct SHARES* Shares;
Shares Share  (); //constructor
void delete_share(Shares); //destructor
char* get_id(Shares);
char* get_name(Shares);
char* get_symbol(Shares);
float* get_price(Shares);

void set_id(Shares, char*);
void set_name(Shares, char*);
void set_symbol(Shares, char*);
void set_price(Shares,float*);

void print_share(Shares);

#endif
