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

int findRepeatStr(){
    int prev = -1, cnt = 0;
    for(auto ch : pos){
        if(prev == -1) {
            cnt++;
            prev = chk[ch - 'a'];
            continue;
        }

        if(prev < chk[ch - 'a']) prev = chk[ch-'a'];
        else {
            cnt++;
            prev = chk[ch - 'a'];
        }
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