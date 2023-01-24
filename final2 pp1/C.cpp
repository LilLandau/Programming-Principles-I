#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (st.empty() == true)
        {
            for (int i = 0; i < a; i++)
            {
                st.push(a);
            }
        }
        else
        {
            for (int i = 0; i < a; i++)
            {
                if (st.empty() == true)
                {
                    break;;
                }
                st.pop();
            }

            for (int i = 0; i < a; i++)
            {
                st.push(a);
            }
        }
    }

    set <int> s;
    while (st.empty() == false)
    {
        s.insert(st.top());
        st.pop();
    }
    
    int colors = s.size();
    cout << colors;
    return 0;
}