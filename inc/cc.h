#ifndef _CC_H
#define _CC_H

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

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

void multiply(int array[], int n)
{
    //cout << "->" << x << endl;
    /*
    x *= x;
    cout << "((" << x << "))" << endl;
    */
}

void reverseString(vector<int> &str)
{
    int num = 0;
    vector<int> reversed;

    cout << endl;
    cout << "Not Reversed" << endl;
    for (auto &it : str)
    {
        cout << it << " ";
    }

    for (int i = str.size() - 1; i >= 0; i--)
    {
        num = (int)str[i];
        reversed.push_back(num);
    }

    cout << endl;

    cout << "Reversed" << endl;
    for (auto &at : reversed)
    {
        cout << at << " ";
    }

    /*
    cout << endl;
    int sum = 0;
    cout << "sum: ";
    cout << accumulate(even.begin(), even.end(), sum) << endl;
    */
}

/* Double every digit from right to left. */
int validateString(const string &card)
{
    vector<int> v;
    string c = card;

    int i = 0;

    for (string::iterator it = c.begin(), end = c.end(); it != end; ++it)
    {
        if (i % 2 == 0)
        {
            int num = (int)*it - 48;
            v.push_back(num);
        }
        i++;
    }

    /*
    for (auto &it : v)
    {
        cout << it << " ";
    }
    */
    reverseString(v);
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
}

#endif