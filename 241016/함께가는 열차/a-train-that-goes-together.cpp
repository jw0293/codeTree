#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> infos;

bool cmp(pair<int, int> &lhs, pair<int, int> &rhs){
    if(lhs.first == rhs.first) {
        return lhs.second > rhs.second;
    }
    return lhs.first < rhs.first;
}

void input(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int pos, spd;
        cin >> pos >> spd;

        infos.push_back({pos, spd});
    }
}

int solution(){
    int curSpd = -1, ans = 0;
    sort(infos.begin(), infos.end(), cmp);
    for(int i=infos.size()-1;i>=0;i--){
        if(curSpd == -1 || (curSpd != -1 && infos[i].second <= curSpd)) {
            ans++;
            curSpd = infos[i].second;
        }
    }
    return ans;
}

int main() {
    input();
    cout << solution() << '\n';

    return 0;
}