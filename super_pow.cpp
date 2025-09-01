/*372. Super Pow
Solved
Medium
Topics
premium lock icon
Companies
Your task is to calculate ab mod 1337 where a is a positive integer and b is an extremely large positive integer given in the form of an array.

 

Example 1:

Input: a = 2, b = [3]
Output: 8
Example 2:

Input: a = 2, b = [1,0]
Output: 1024
Example 3:

Input: a = 1, b = [4,3,3,8,5,2]
Output: 1*/
class Solution {
public:
    int mod = 1337;

    int mul(int a, int b){
        return (a % mod) * (b % mod) % mod;
    }

    int powerUnderMode(int a, int n) {
        if(n == 0) return 1;

        int partial_ans = powerUnderMode(a, n/2);
        partial_ans = mul(partial_ans, partial_ans);

        if(n % 2 == 0) {
            return partial_ans;
        }
        return mul(partial_ans, a);
    }
    int superPow(int a, vector<int>& b) {
        int ans{1};

        a %= mod;
        for(int i = b.size() - 1; i >= 0; i--){
            ans = mul(ans,powerUnderMode(a,b[i]));
            a = powerUnderMode(a,10);
        }
        return ans;
        
    }
};