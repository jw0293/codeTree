#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> infos;

void input(){
    for(int i=0;i<3;i++){
        int size, cur;
        cin >> size >> cur;
        infos.push_back({size, cur});
    }
}

void output(){
    for(int i=0;i<3;i++){
        cout << infos[i].second << '\n';
    }
}

void moveWater(int from, int to){
    if(infos[from].second + infos[to].second <= infos[to].first) {
        infos[to].second += infos[from].second;
        infos[from].second = 0;
    } else{
        infos[from].second -= infos[to].first;
        infos[to].second = infos[to].first;
    }
}

void rotationWaterBowl(){
    int MAX_SIZE = 100;
    for(int i=0;i<MAX_SIZE;i++) {
        moveWater(i % 3, (i+1) % 3);
    }
}

void solve(){
    rotationWaterBowl();
    output();
}

int main() {
    input();
    solve();

    return 0;
}