#include <iostream>
#include <string> 
using namespace std;

int N;

void input(){
    cin >> N;
}

int addPos(int n){
    return (n / 10) + (n % 10);
}

int getRst(int n, int val){
    string temp = "";
    temp += to_string(n % 10) + to_string(val % 10);
    return stoi(temp);
}

int solution(){
    int length = 0, ret = N;
    while(length == 0 || ret != N) {
        length++;
        N = getRst(N, addPos(N));
    }
    return length;
}

int main() {
    input();
    cout << solution() << '\n';

    return 0;
}