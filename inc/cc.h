#ifndef _CC_H
#define _CC_H

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

void add_single_digits(int n)
{
    cout << "\nAdd all digits in the odd places from right to left in the card number: " << n << endl;
}

/* c) Add all digits in the odd places from right to left in the credit card number */
//vector<int> add_odd_digits(vector<int> &v)
void add_odd_digits(vector<int> &v)
{
    int sum = 0;
    cout << "Odd Digits Summed Up: ";
    cout << accumulate(v.begin(), v.end(), sum) << endl;
}

int add_two_digits(int digits)
{
    /* 
        If doubling of a digit results in a two-digit number 
        add the two digits to get a single digit number. 
    */
    return digits;
}

void multiply_two_digits(int array[], int n)
{
    //cout << "->" << x << endl;
    /*
    x *= x;
    cout << "((" << x << "))" << endl;
    */
}

void reverseString(vector<int> &str)
{
    int count = 0, digit_one = 0, digit_two = 0, double_digits = 0, num = 0, sum = 0;

    vector<int> reversed;

    cout << "Parsed and not reversed: ";

    for (auto &it : str)
    {
        cout << it << " ";
    }

    for (int i = str.size() - 1; i >= 0; i--)
    {
        num = (int)str[i];
        reversed.push_back(num);
    }

    cout << "\nParsed and reversed: ";

    for (auto &at : reversed)
    {
        cout << at << " ";
    }

    cout << "\nReversed & Doubled: ";

    for (auto &at : reversed)
    {
        if (count % 2 == 0)
        {
            if ((at * 2) > 9)
            {
                /* This mess combines a double digit into a single digit */
                cout << "\nGreater than 10 (double digits): " << (at * 2) << ", ";
                digit_one = log10((float)at) + 1;
                digit_two = (at * 2) % 10;
                double_digits = (digit_one + digit_two);
                cout << "\nDouble Digits " << double_digits << endl;
                sum += double_digits;
            }
            else
            {
                cout << (at * 2) << ", ";
                sum += (at * 2);
            }
        }
        count += 1;
    }

    add_single_digits(sum);
    add_odd_digits(reversed);
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

    reverseString(v);
}

bool isValid(const string &card)
{
    cout << "\n******************************" << endl;
    cout << "Card Number: " << card << endl;
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
        //        cout << setw(2) << count++ << ". " << setw(17) << *it << " is" << result << endl;
    }
}

#endif