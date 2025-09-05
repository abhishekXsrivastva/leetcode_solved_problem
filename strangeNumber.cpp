#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int x, k;
        cin >> x >> k;
        int count{0};

        for(int num = 2; num * num <= x; num++){
            while(x % num == 0) {
            count++;
            x /= num;
        }
    }
  if(x > 1) count++;

    if(count >= k) {
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }
    }
    return 0;
}