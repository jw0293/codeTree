#include <iostream>

using namespace std;

int n, p;
int visited[100000 + 1];

void input(){
    cin >> n >> p;
}

int solution(){
    int size = 0;
    long long next = n;
    while(1){
        next = next * n % p;
        if(visited[next]) break;
        visited[next] = size;
        size++;
    }
    return size - visited[next];
}

int main() {
    input();
    cout << solution() << '\n';

    return 0;
}