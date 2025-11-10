#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    sort(stages.begin(), stages.end());
    
    vector<int> answer(N);
    vector<double> fail(N + 1, 0.0); // 실패율
    double nowPeopleButNotClear = 0; // 도달하기만 한 사람들
    double nowPeople = stages.size(); // 도달한 사람들
    int prev_stage = stages[0];
    
    // 실패율 저장
    for (int i = 0; i < stages.size(); i++) {
        if (prev_stage != stages[i] || i == stages.size() - 1) {
            if (prev_stage <= N){
                if (prev_stage == stages[i] && i == stages.size() - 1){
                    nowPeopleButNotClear += 1;
                }
                double failPercent = nowPeopleButNotClear / nowPeople; // 실패율
                fail[prev_stage] = failPercent; // stage 실패율 초기화
            }
            
            nowPeople -= nowPeopleButNotClear; // 도달한 사람들 지속적으로 초기화
            prev_stage = stages[i]; // 이전 stage를 현재 stage로 초기화
            nowPeopleButNotClear = 1; // 현재 stage에 도달한 사람 1로 초기화
        } else if (prev_stage != N + 1){
            nowPeopleButNotClear += 1; // 도달하기만 한 사람들 +1
        }
    }
    
    cout << fail[4] << endl;
    
    for (int i = 1; i < N + 1; i++) { // 기준(stage)
        int pos = 0; // 기준 stage가 들어갈 위치
        for (int j = 1; j < N + 1; j++) { // 비교(stage)
            if (i != j && fail[i] <= fail[j]){
                if (fail[i] == fail[j] and i > j) {
                    pos += 1;
                } else if (fail[i] < fail[j]) {
                    pos += 1;
                }
            }
        }
        answer[pos] = i;
    }
    
    return answer;
}