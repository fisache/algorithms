#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int dp[1001];
int main()
{
    int n;
    scanf("%d", &n);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3; i<=n; i++) {
        dp[i] = dp[i-1]%10007 + dp[i-2]%10007;
    }
    printf("%d\n", (dp[n]%10007));
    return 0;
}