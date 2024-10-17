#include <iostream>
#include <algorithm>
#define MAX_TIME 1000

using namespace std;

int N;
int computer[1000 + 1];

void input(){
    cin >> N;
    for(int i=0;i<N;i++){
        int start, end, cnt;
        cin >> start >> end >> cnt;
        for(int j=start;j<=end;j++){
            computer[j] += cnt;
        }
    }
}

int solution(){
    int ans = 0;
    for(int i=1;i<=MAX_TIME;i++){
        ans = max(ans, computer[i]);
    }
    return ans;
}

int main() {
    input();
    cout << solution() << '\n';

    return 0;
}