#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
using namespace std;


int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) { cin >> arr[i]; }

    int currArea = 0;
    int maxArea = 0;

    for (int i = 0; i < n; i++)
    {
        //lefter area to the current point
        for (int j = i-1; j >= 0; --j)
        {
            if (i == 0) { break; }

            if (arr[i] <= arr[j]) { currArea += arr[i]; }
            else { break; }
        }

        //righter area and current point area
        for (int j = i; j < n; j++)
        {
            if (arr[i] <= arr[j]) { currArea += arr[i]; }
            else { break; }
        }
        
        if (currArea >= maxArea) { maxArea = currArea; }
        
        currArea = 0;
    }
    
    cout << maxArea;
    return 0;
}