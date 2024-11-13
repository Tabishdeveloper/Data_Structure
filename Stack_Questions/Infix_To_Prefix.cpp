#include <iostream>
#include <stack>
#include<algorithm>
using namespace std;

int prec(char c) {
    if (c == '*' || c == '/') return 2;
    if (c == '-' || c == '+') return 1;
    return -1; // For non-operators
}

string inf_to_pre(string s) {
    reverse(s.begin(),s.end());
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            res += s[i];
        } else if (s[i] == ')') {
            st.push(s[i]);
        } else if (s[i] == '(') {
            while (!st.empty() && st.top() != ')') {
                res += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop(); // pop '('
        } else {
            while (!st.empty() && prec(st.top()) >= prec(s[i])) {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}

int main() {
    cout << inf_to_pre("1*(2+(3-4)*5)/6") << endl;
    return 0;
}