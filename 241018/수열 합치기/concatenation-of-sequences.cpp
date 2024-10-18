#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<int> v1, v2;

void initVector(){
    v1 = vector<int>(N, 0);
    v2 = vector<int>(M, 0);
}

void input(){
    cin >> N >> M;
    initVector();
    for(int i=0;i<N;i++) {
        cin >> v1[i];
    }
    for(int i=0;i<M;i++){
        cin >> v2[i];
    }
}

vector<int> getAllVector(){
    vector<int> ret;
    for(auto &cur : v1) ret.push_back(cur);
    for(auto &cur : v2) ret.push_back(cur);
    return ret;
}

void solution(){
    vector<int> ret = getAllVector();
    sort(ret.begin(), ret.end());
    for(auto &p : ret) {
        cout << p << " ";
    }
    cout << '\n';
}

int main() {
    input();
    solution();

    return 0;
}