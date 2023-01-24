#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;
int main()
{

    stack<int> st;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1' && st.empty() == false && st.top() == '1')
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }

    string ans;
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}