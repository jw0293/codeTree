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

string getLastNumber(int x){
    return to_string(x % 10);
}

string makeNewNumber(int n, int val){
    return getLastNumber(n) + getLastNumber(val);
}

int getRst(int n, int val){
    return stoi(makeNewNumber(n, val));
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