#include <iostream>
using namespace std;

int chk[26 + 1];
string str, pos;

void input(){
    cin >> str >> pos;
}

void initPosition(){
    for(int i=0;i<str.size();i++){
        chk[str[i]-'a'] = i;
    }
}

void savePoint(int &cnt, int &prev, char ch){
    cnt++;
    prev = chk[ch - 'a'];
}

int findRepeatStr(){
    int prev = -1, cnt = 0;
    for(auto ch : pos){
        if(prev == -1 || chk[ch - 'a'] <= prev) {
            savePoint(cnt, prev, ch);
            continue;
        }
        prev = chk[ch-'a'];
    }
    return cnt;
}

int solution(){
    initPosition();
    return findRepeatStr();
}

int main() {
    input();
    cout << solution() << '\n';

    return 0;
}