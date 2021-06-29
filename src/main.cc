#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#include "cc.h"

using namespace std;

int main(void)
{
	int i = 0;
	vector<string> cardNumbers;
	vector<string>::iterator itr;

	cardNumbers.push_back("371449635398431");
	cardNumbers.push_back("4444444444444448");
	cardNumbers.push_back("4444424444444440");
	cardNumbers.push_back("4110144110144115");
	cardNumbers.push_back("4114360123456785");
	cardNumbers.push_back("4061724061724061");
	cardNumbers.push_back("5500005555555559");
	cardNumbers.push_back("5115915115915118");
	cardNumbers.push_back("5555555555555557");
	cardNumbers.push_back("6011016011016011");
	cardNumbers.push_back("372449635398431");
	cardNumbers.push_back("4444544444444448");
	cardNumbers.push_back("4444434444444440");
	cardNumbers.push_back("4110145110144115");
	cardNumbers.push_back("4124360123456785");
	cardNumbers.push_back("4062724061724061");
	cardNumbers.push_back("5501005555555559");
	cardNumbers.push_back("5125915115915118");
	cardNumbers.push_back("5556555555555557");
	cardNumbers.push_back("6011116011016011");
	cardNumbers.push_back("372449635397431");
	cardNumbers.push_back("4444544444444448");
	cardNumbers.push_back("4444434444544440");
	cardNumbers.push_back("4110145110184115");
	cardNumbers.push_back("4124360123457785");
	cardNumbers.push_back("4062724061724061");
	cardNumbers.push_back("5541005555555559");
	cardNumbers.push_back("5125115115915118");
	cardNumbers.push_back("5556551555555557");
	cardNumbers.push_back("6011316011016011");

	/* sort the vector */
	sort(cardNumbers.begin(), cardNumbers.end());

	/*
	for(auto it = cardNumbers.begin(); it != cardNumbers.end(); ++it) {
		cout << "" << *it << endl;
	}
	*/


	/*
   for (i = 1, itr = cardnumbers.begin(); itr != cardnumbers.end(); ++itr, i++) {                              
     cout << setw(2)  << i << " ".                                                                             
        << setw(17) << *itr.                                                                                   
        << ((isvalidcc(*itr)) ? " is valid" : " is not valid") << endl;                                        
   }                                                                                                           
   */

   for(itr = cardNumbers.begin(); itr != cardNumbers.end(); ++itr) 
   {
		cout << setw(2) << i << " ." << setw(17) << *itr << endl;
		i += 1;
   }
                            

	/*
	try {
		for(int i = 0; i < cardNumbers.size(); i++)
		{
			cout << cardNumbers.at(i) << endl;
		}
	} catch(out_of_range& e) {
		cerr << e.what() << endl;
	}
	*/

	return 0;
}