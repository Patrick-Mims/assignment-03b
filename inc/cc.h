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

void addSingleDigitNumbers()
{
    // step b
}

int addTwoDigits(int digits)
{
    /* 
        If doubling of a digit results in a two-digit number 
        add the two digits to get a single digit number. 
    */
    return digits;
}

int validateString(vector<string>::iterator thing)
{
    /* Double every digit from right to left.  */
}

string result;

bool isValid(vector<string> &ccNumber, vector<string>::iterator &it)
//bool isValid(vector<string>::iterator item)
//bool isValid(const string &item)
//bool isValid(const string &item)
{
    //    cout << "Status: " << item;
    int count = 0;

    for (it; it != ccNumber.end(); ++it)
    {
        /*
        result = isValid(*it) ? "Valid" : "Not Valid";
        */
        cout << setw(2) << count++ << ". " << setw(17) << *it << " [ " << result << " ]" << endl;
    }

    //    validateString(item);
    return 0;
}

#endif