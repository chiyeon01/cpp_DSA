#include <iostream>
#include <string>
#include <stack>

using namespace std;

string solution(int decimal) {
    stack<char> st;
    string result = "";

    if (decimal == 0) {
        st.push('0');
    }

    while (decimal != 0) {
        if (decimal % 2 == 0) {
            st.push('0');
            decimal = decimal / 2;
        } else {
            st.push('1');
            decimal = (decimal - 1) / 2;
        }
    }
    
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    return result;

}

int main() {
    cout << solution(10) << endl;
    cout << solution(27) << endl;
    cout << solution(12345) << endl;
    return 0;
}