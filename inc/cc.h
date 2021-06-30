#ifndef _CC_H
#define _CC_H

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isValid(vector<string>::iterator item)
{
    /* this passes the value to this function */
    cout << "I am true: " << *item << endl;
    return 0;
}

#endif