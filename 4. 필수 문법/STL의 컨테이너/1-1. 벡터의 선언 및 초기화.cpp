#include <vector>

using namespace std;

int main() {
    vector<int> v;
    vector<int> v2 = {1, 2, 3, 4, 5};
    vector<int> v3(4, 3);
    vector<int> v4(v3);
    
    return 0;
}