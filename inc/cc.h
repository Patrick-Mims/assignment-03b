#ifndef _CC_H
#define _CC_H

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

/* this is part D of the assignment */
int sum_the_results(int b, int c)
{
    return (b + c);
}

/* this is part B of the assignment */
void add_single_digits(int n)
{
    cout << "\nAdd all digits in the odd places from right to left in the card number: " << n << endl;
}

/* c) Add all digits in the odd places from right to left in the credit card number */
int add_odd_digits(vector<int> &v)
{
    int sum = 0;
    cout << "Odd Digits Summed Up: ";
    cout << accumulate(v.begin(), v.end(), sum) << endl;
    return sum;
}

bool reverseString(vector<int> &str)
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
                digit_one = log10((float)at) + 1;
                digit_two = (at * 2) % 10;
                sum += (digit_one + digit_two);
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
    int odd = add_odd_digits(reversed);

    int total = sum_the_results(odd, sum);

    cout << "Total: " << total << endl;

    if (total % 10 == 0)
        return 1;

    return 0;
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
    cout << "******************************" << endl;
    return 0;
}

/* process the credit card, shows if the card is valid or invalid */
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