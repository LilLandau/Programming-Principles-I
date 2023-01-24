#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main()
{
    string numberString;
    cin >> numberString;

    stack<char> digits;
    double number;

    for (int i = 0; i < numberString.size(); i++)
    {
        if (digits.empty())
        {
            digits.push(numberString[i]);
        }
        else
        {
            number = (digits.top() - '0') * 10 + (numberString[i] - '0');
            if (sqrt(number) == round(sqrt(number)))
            {
                digits.pop();
            }
            else
            {
                digits.push(numberString[i]);
            }
        }
    }

    if (digits.empty())
    {
        cout << "Stack is empty";
    }
    else
    {
        while (!digits.empty())
        {
            cout << digits.top();
            digits.pop();
        }
    }

    return 0;
}