/*
    https://www.codechef.com/APRIL21C/problems/KAVGMAT
*/

#include<bits/stdc++.h>
using namespace std;

#define all_test_cases int t; scanf("%d", &t); while (t--)

long long solve() {
    long long n, m, k;
    cin >> n >> m >> k;
    
    double a[n+1][m+1];
    memset(a, 0, sizeof(a));
    
    long long ans=0;
    for(long long i=1; i<=n; i++) {
        for(long long j=1;j<=m;j++) cin >> a[i][j];
    }
    
    for(long long i=0; i<=n; i++) {
        double sum=0;
        for(long long j=0; j<=m; j++) {
            sum += a[i][j];
            a[i][j] = sum;
        }
    }
    
    for(long long j=0; j<=m; j++) {
        double sum=0;
        for(long long i=0; i<=n; i++) {
            sum += a[i][j];
            a[i][j] = sum;
        }
    }
    
    long long xc = (m<n) ? m : n;
    
    for(long long l=1; l<=xc; l++) {
        for(long long i=l; i<=n; i++) {
            for(long long j=l; j<=m; j++) {
                double f = a[i][j]+a[i-l][j-l]-a[i-l][j]-a[i][j-l];
                f = f/(l*l);
                
                if(f>=k) ans++;
            }
        }
    }

    return ans;
}

int main()
{
    all_test_cases cout << solve() << endl;
    
    return 0;
}