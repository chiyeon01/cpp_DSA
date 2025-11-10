#include <iostream>
#include <string>
#include <vector>

using namespace std;

// max_element 함수 안쓴 풀이 -> O(N)
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> oneMethod = {1, 2, 3, 4, 5};
    vector<int> twoMethod = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> threeMethod = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int oneCorrect = 0;
    int twoCorrect = 0;
    int threeCorrect = 0;
    int maxCorrect = 0;
    
    for (int i = 0; i < answers.size(); i++) {
        int oneIdx = i % 5;
        int twoIdx = i % 8;
        int threeIdx = i % 10;
        
        if (answers[i] == oneMethod[oneIdx]) {
            oneCorrect ++;
        }
        if (answers[i] == twoMethod[twoIdx]) {
            twoCorrect ++;
        }
        if (answers[i] == threeMethod[threeIdx]) {
            threeCorrect ++;
        }
        
        if (maxCorrect < oneCorrect) {
            maxCorrect = oneCorrect;
        }
        if (maxCorrect < twoCorrect) {
            maxCorrect = twoCorrect;
        }
        if (maxCorrect < threeCorrect) {
            maxCorrect = threeCorrect;
        }
    }
    
    if (oneCorrect == maxCorrect) {
        answer.push_back(1);
    }
    if (twoCorrect == maxCorrect) {
        answer.push_back(2);
    }
    if (threeCorrect == maxCorrect) {
        answer.push_back(3);
    }

    return answer;
}