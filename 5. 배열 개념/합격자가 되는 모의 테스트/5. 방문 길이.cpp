#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string dirs) {
    int answer = 0;
    int nx = 5; // 처음 x좌표
    int ny = 5; // 처음 y좌표
    auto Visited = vector<vector<vector<vector<bool>>>>(
    11,
    vector<vector<vector<bool>>>(
        11,
        vector<vector<bool>>(
            11,
            vector<bool>(11, false)
            )
        )
    );
    
    for (char d: dirs) {
        if (d == 'U') {
            int dx = nx;  
            int dy = ny - 1;
            if (dx >= 0 && dx < 11 && dy >= 0 && dy < 11) {
                if (Visited[nx][ny][dx][dy] == false && Visited[dx][dy][nx][ny] == false) {
                    answer += 1;
                    Visited[nx][ny][dx][dy] = true;
                    Visited[dx][dy][nx][ny] = true;
                }
                nx = dx;
                ny = dy;
            } // 범위를 벗어나지 않는다면
        } else if (d == 'R') {
            int dx = nx + 1;  
            int dy = ny;
            if (dx >= 0 && dx < 11 && dy >= 0 && dy < 11) {
                if (Visited[nx][ny][dx][dy] == false && Visited[dx][dy][nx][ny] == false) {
                    answer += 1;
                    Visited[nx][ny][dx][dy] = true;
                    Visited[dx][dy][nx][ny] = true;
                }
                nx = dx;
                ny = dy;
            } // 범위를 벗어나지 않는다면
        } else if (d == 'D') {
            int dx = nx;  
            int dy = ny + 1;
            if (dx >= 0 && dx < 11 && dy >= 0 && dy < 11) {
                if (Visited[nx][ny][dx][dy] == false && Visited[dx][dy][nx][ny] == false) {
                    answer += 1;
                    Visited[nx][ny][dx][dy] = true;
                    Visited[dx][dy][nx][ny] = true;
                }
                nx = dx;
                ny = dy;
            } // 범위를 벗어나지 않는다면
        } else if (d == 'L') {
            int dx = nx - 1;  
            int dy = ny;
            if (dx >= 0 && dx < 11 && dy >= 0 && dy < 11) {
                if (Visited[nx][ny][dx][dy] == false && Visited[dx][dy][nx][ny] == false) {
                    answer += 1;
                    Visited[nx][ny][dx][dy] = true;
                    Visited[dx][dy][nx][ny] = true;
                }
                nx = dx;
                ny = dy;
            } // 범위를 벗어나지 않는다면
        }
    }
    
    return answer;
}