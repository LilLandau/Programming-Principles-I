#include <iostream>
using namespace std;

int main() {
    int ArrSize;
    long long Target;
    cin >> ArrSize >> Target;

    long long arr[ArrSize];
    for (int i = 0; i < ArrSize; i++) { cin >> arr[i]; }
    
    int IndexOfTarget;
    for (int i = 0; i < ArrSize ; ++i)
    {
       if (arr[i] == Target)
       {
        IndexOfTarget = i+1;
        break;
       }
       else if (arr[i] < Target && arr[i+1] > Target)
       {
        IndexOfTarget = i+1;
        break;
       }
       else if (arr[ArrSize] < Target)
       {
        IndexOfTarget = ArrSize;
        break;
       }
       else
       {
        IndexOfTarget = 0;
       }
       
    }
    
    cout << IndexOfTarget;
    return 0;
}