#include "cc.h"

using namespace std;

int main(void)
{
	int count = 0;

	/* create new vector & iterator */
	vector<string> ccNumber;
	vector<string>::iterator it;
	ccNumber.push_back("371449635398431");
	ccNumber.push_back("4444444444444448");
	ccNumber.push_back("4444424444444440");
	ccNumber.push_back("4110144110144115");
	ccNumber.push_back("4114360123456785");
	ccNumber.push_back("4061724061724061");
	ccNumber.push_back("5500005555555559");
	ccNumber.push_back("5115915115915118");
	ccNumber.push_back("5555555555555557");
	ccNumber.push_back("6011016011016011");
	ccNumber.push_back("372449635398431");
	ccNumber.push_back("4444544444444448");
	ccNumber.push_back("4444434444444440");
	ccNumber.push_back("4110145110144115");
	ccNumber.push_back("4124360123456785");
	ccNumber.push_back("4062724061724061");
	ccNumber.push_back("5501005555555559");
	ccNumber.push_back("5125915115915118");
	ccNumber.push_back("5556555555555557");
	ccNumber.push_back("6011116011016011");
	ccNumber.push_back("372449635397431");
	ccNumber.push_back("4444544444444448");
	ccNumber.push_back("4444434444544440");
	ccNumber.push_back("4110145110184115");
	ccNumber.push_back("4124360123457785");
	ccNumber.push_back("4062724061724061");
	ccNumber.push_back("5541005555555559");
	ccNumber.push_back("5125115115915118");
	ccNumber.push_back("5556551555555557");
	ccNumber.push_back("6011316011016011");

	/* Sort vector */
	sort(ccNumber.begin(), ccNumber.end());

	/* Initialize by pointing to the first object that is at the beginning of the vector  or (ccNumber) */
	it = ccNumber.begin();

	/* Pass vector by reference to processCreditCard(&vector, &iterator) function */
	processCreditCard(ccNumber, it);

	return 0;
}