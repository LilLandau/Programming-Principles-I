#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0, count = 0; i < size-2; i++)
    {
        int Left = i;
        int Right = i+1;

        while (arr[Left] == arr[Right])
        {
            int com = 2;
            while ((--Left >= 0) && (arr[Left] == arr[Right]))
            {
                ++com;
            }
            while ((++Right < size) && (arr[Right] == arr[Left+1]))
            {
                ++com;
            }
            if (com < 3)
            {
                break;
            }
            count += com;
        }
        cout << count;   
    }
    return 0;
}