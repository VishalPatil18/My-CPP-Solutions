#include<bits/stdc++.h>
using namespace std;

#define all_test_cases int t; scanf("%d", &t); while (t--)

vector<int> ans;

void SOLVE(){
    int N, Q;
    cin >> N >> Q;
    int arr[N+1];
    for(int i=1; i<=N; cin >> arr[i++]);

    // cout << N << " " << Q << endl;
    // for(int i=0; i<N; cout << arr[i++] << " ");
    // cout << endl;

    while(Q){
        int type, u, v;
        cin >> type >> u >> v;

        if(type == 1) arr[u] = v;
        else if(type == 2){
            int xor_min = 1001;
            for(int i=u; i<=v; i++){
                for(int j=v; j>=1 && i!=j; j--){
                    xor_min = min(xor_min, arr[i]^arr[j]);
                    // cout << "arr[i] = " << arr[i] << " arr[j] = " << arr[j] << " xor = " << xor_min << endl;
                }
            }
            ans.push_back(xor_min);
        }
        Q--;
    }
}

int main()
{   
    all_test_cases SOLVE();

    for(int x : ans) cout << x << endl;
    
    return 0;
}