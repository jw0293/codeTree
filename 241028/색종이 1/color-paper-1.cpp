#include <iostream>
using namespace std;

int N;
int board[100 + 1][100 + 1];

void squareExtent(int x, int y){
    for(int i=x;i<x+10;i++){
        for(int j=y;j<y+10;j++){
            board[i][j] = 1;
        }
    }
}

void input(){
    cin >> N;
    int x, y;
    while(N--){
        cin >> x >> y;
        squareExtent(x, y);
    }
}

int totalExtent(){
    int sum = 0;
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
            if(board[i][j] != 0) {
                sum++;
            }
        }
    }
    return sum;
}

int solution(){
    return totalExtent();
}

int main() {
    input();
    cout << solution() << '\n';

    return 0;
}