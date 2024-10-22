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
    int ret = 0;
    for(auto c : pos){
        ret = max(ret, chk[c-'a']);
    }
    return ret + 1;
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