#ifndef _CC_H
#define _CC_H

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void addResults()
{
    // step c
}

int addTwoDigits(int digits)
{
    /* 
        If doubling of a digit results in a two-digit number 
        add the two digits to get a single digit number. 
    */
    return digits;
}

//void reverseString(string str)
void reverseString(string str)
{
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            cout << "[" << str[i] << "]";
        }
    }
    cout << endl;
}

/* Double every digit from right to left. */
int validateString(const string &card)
{
    string c = card;

    int i = 0;

    for (char &j : c)
    {
        if (i % 2 == 0)
        {
            cout << j << endl;
            //cout << (j * 2) << endl;
        }
        i++;
    }

    reverseString(card);
    cout << "validate string function with c as a string variable: " << c << " length: " << c.length() << endl;
}

bool isValid(const string &card)
{
    cout << "card number: " << card << endl;
    validateString(card);
    return 0;
}

void processCreditCard(vector<string> &ccNumber, vector<string>::iterator &it)
{
    int count = 0;
    string result;

    for (it; it != ccNumber.end(); ++it)
    {
        result = isValid(*it) ? " valid" : " not valid";
        cout << setw(2) << count++ << ". " << setw(17) << *it << " is" << result << endl;
    }

    //    validateString(item);
}

#endif