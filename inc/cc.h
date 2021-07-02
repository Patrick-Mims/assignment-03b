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

//void reverseString(string str)
void reverseString(vector<int> &str)
//void reverseString(const string &card)
{
    //cout << "Card: " << str.begin() << endl;
    for (auto &it : str)
    {
        cout << "reversed vector: " << it << " ";
    }
    /*
    vector<int> even;
    vector<int> odd;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            cout << "[" << str[i] << "]";
        }
        else
        {
            cout << "(" << str[i] << ")" << endl;
            int num = (int)str[i] - 48;
            even.push_back(num);
        }
        //ccNumber.push_back("371449635398431");
    }
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

    for (auto &it : v)
    {
        cout << it << " ";
    }
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

    //    validateString(item);
}

#endif