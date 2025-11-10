#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> addNumbers;
    vector<int> answer;
    
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            int addN = numbers[i] + numbers[j];
            addNumbers.push_back(addN);
        }
    }
    
    sort(addNumbers.begin(), addNumbers.end());
    
    auto end = unique(addNumbers.begin(), addNumbers.end());
    
    for (auto i = addNumbers.begin(); i < end; i++) {
        answer.push_back(*i);
    }
    
    return answer;
}