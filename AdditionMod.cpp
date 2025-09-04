#include<bits/stdc++.h>
using namespace std;

long addUnderMod(long a, long b, long m){
    if(b == 0) return 0;

    long half_ans = addUnderMod(a, b/2, m);
    if(b % 2 == 0) {
        return ((half_ans + half_ans) % m);
    }else{
        return ((half_ans + half_ans) % m + a) % m;
    }
}

int main() {
    long long a, b, m;
    cin >> a >> b >> m;
    cout<<addUnderMod(a, b, m);
    cout<<endl;
    return 0;
}