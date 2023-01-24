#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int amount;
    cin >> amount;

    int arr[amount];
    for (int i = 0; i < amount; i++)
    {
        cin >> arr[i];
    }
    
    /* создаю массива с суммами цифр чисел предыдущего массива */
    int arrSum[amount];
    for (int i = 0; i < amount; i++)
    {
        /* беру число из массива */
        int num = arr[i];

        /* раскладываю число на цифры и суммирую их */
        int digit = 0;
        int sumofdig = 0;
        while (num > 0) 
        {
            digit = num%10;
            sumofdig += digit;
            num /= 10;
        }

        /* предаю сумму в массив */
        arrSum[i] = sumofdig;
    }
    
    /* проверяю на четность каждый элемент массива суммы цифр */
    for (int i = 0; i < amount; i++)
    {
        if (arrSum[i] % 2 == 0)
        {
            cout << "Sum of digits is even!" << endl;
        }
        else 
        {
            cout << "Sum of digits is odd!" << endl;
        }
    }
    
    return 0;
}