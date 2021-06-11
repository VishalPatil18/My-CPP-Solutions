#include<bits/stdc++.h>
using namespace std;

// #define all_test_cases int t; scanf("%d", &t); while (t--)

// vector<int> ans;

// void SOLVE(){
    
// }

int main()
{   
    // all_test_cases SOLVE();

    int N, Q;
    cin >> N >> Q;
    int arr[N];
    int hash[101] = {0};
    int distinct[N] = {0};
    for(int i=0; i<N; i++){
        cin >> arr[i];
        hash[arr[i]]++;    
    }
    // for(int i=0; i<101; cout << hash[i++] << endl);

    distinct[0] = 1;
    hash[arr[0]] = 0;
    
    for(int j=1; j<N; ++j){
        if(hash[arr[j]] > 0) distinct[j] = distinct[j-1] + 1;
        else distinct[j] = distinct[j-1];
        hash[arr[j]] = 0;
    }
    
    // for(int i=0; i<N; cout << distinct[i++] << " ");

    vector<int> ans;
    
    while(Q){
        int type, a, b;
        cin >> type >> a >> b;

        if(type == 1){
            if(a >= 2) ans.push_back(distinct[a+1] - distinct[b] + 1);
            else ans.push_back(distinct[b-1]);
        }

        if(type == 2){
            for(int i=0; i<N; i++) hash[arr[i]]++;

            hash[arr[a-1]]--;
            arr[a-1] = b;
            hash[arr[a-1]]++;

            distinct[0] = 1;
            hash[arr[0]] = 0;
            
            for(int j=1; j<N; ++j){
                if(hash[arr[j]] > 0) distinct[j] = distinct[j-1] + 1;
                else distinct[j] = distinct[j-1];
                hash[arr[j]] = 0;
            }
            // cout << endl;
            // for(int i=0; i<N; cout << arr[i++] << " ");
            // cout << endl;
            // for(int i=0; i<N; cout << distinct[i++] << " ");
        }
        Q--;
    }


    for(int x : ans) cout << x << endl;
    cout << "\b";

    return 0;
}