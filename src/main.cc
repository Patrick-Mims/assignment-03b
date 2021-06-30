#include "cc.h"

using namespace std;

int main(void)
{
	int i = 0;
	vector<string> ccNumbers;
	vector<string>::iterator it;

	ccNumbers.push_back("371449635398431");
	ccNumbers.push_back("4444444444444448");
	ccNumbers.push_back("4444424444444440");
	ccNumbers.push_back("4110144110144115");
	ccNumbers.push_back("4114360123456785");
	ccNumbers.push_back("4061724061724061");
	ccNumbers.push_back("5500005555555559");
	ccNumbers.push_back("5115915115915118");
	ccNumbers.push_back("5555555555555557");
	ccNumbers.push_back("6011016011016011");
	ccNumbers.push_back("372449635398431");
	ccNumbers.push_back("4444544444444448");
	ccNumbers.push_back("4444434444444440");
	ccNumbers.push_back("4110145110144115");
	ccNumbers.push_back("4124360123456785");
	ccNumbers.push_back("4062724061724061");
	ccNumbers.push_back("5501005555555559");
	ccNumbers.push_back("5125915115915118");
	ccNumbers.push_back("5556555555555557");
	ccNumbers.push_back("6011116011016011");
	ccNumbers.push_back("372449635397431");
	ccNumbers.push_back("4444544444444448");
	ccNumbers.push_back("4444434444544440");
	ccNumbers.push_back("4110145110184115");
	ccNumbers.push_back("4124360123457785");
	ccNumbers.push_back("4062724061724061");
	ccNumbers.push_back("5541005555555559");
	ccNumbers.push_back("5125115115915118");
	ccNumbers.push_back("5556551555555557");
	ccNumbers.push_back("6011316011016011");

	/* sort vector */
	sort(ccNumbers.begin(), ccNumbers.end());

	/* initialize by pointing to the first object that is at the beginning of the vector */
	it = ccNumbers.begin();

	/* test to see if we're getting any data */
	cout << "it: " << *it << endl;

	/* traverse the vector */
	for(it; it != ccNumbers.end(); ++it) 
	{
		cout << setw(2) << i++ << ". " << setw(17) << *it << endl;
		isValid(it);
	}
                            
   	// << ((isvalidcc(*itr)) ? " is valid" : " is not valid") << endl;                                        
	return 0;
}