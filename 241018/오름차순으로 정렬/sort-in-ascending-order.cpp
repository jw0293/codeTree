#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> ret;

void initVector(){
    ret = vector<int>(N,0);
}

void input(){
    cin >> N;
    initVector();
    for(int i=0;i<N;i++){
        cin >> ret[i];
    }
}

void solution(){
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