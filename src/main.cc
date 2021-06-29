#include <iomanip>
#include <iostream>
#include <vector>

#include "cc.h"

using namespace std;

bool isvalidcc(const string &);

int main()
{
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

	for (int i = 0; i < cardNumbers.size(); i++)
	{
		cout << cardNumbers[i] << endl;
	}

	/* do not change main.cc */
	/*
	vector<string> cardnumbers = {
		"371449635398431", "4444444444444448", "4444424444444440", "4110144110144115",
		"4114360123456785", "4061724061724061", "5500005555555559", "5115915115915118",
		"5555555555555557", "6011016011016011", "372449635398431", "4444544444444448",
		"4444434444444440", "4110145110144115", "4124360123456785", "4062724061724061",
		"5501005555555559", "5125915115915118", "5556555555555557", "6011116011016011",
		"372449635397431", "4444544444444448", "4444434444544440", "4110145110184115",
		"4124360123457785", "4062724061724061", "5541005555555559", "5125115115915118",
		"5556551555555557", "6011316011016011"};

	int i;
	vector<string>::iterator itr;

	for (i = 1, itr = cardnumbers.begin(); itr != cardnumbers.end(); ++itr, i++)
	{
		cout << setw(2) << i << " "
			 << setw(17) << *itr
			 << ((isvalidcc(*itr)) ? " is valid" : " is not valid") << endl;
	}
	*/

	return 0;
}