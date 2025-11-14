#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool solution(string str) {
    stack<char> st;

    for (auto s: str) {
        if (st.empty()) {
            st.push(s);
        } else {
            if (st.top() != s) {
                st.pop();
            } else {
                st.push(s);
            }
        }
    }

    if (st.empty()) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << solution("((())()") << endl;
    return 0;
}