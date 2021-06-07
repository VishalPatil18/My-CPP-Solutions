/*
    https://www.codechef.com/JUNE21C/problems/CHFHEIST
    WRONG ANS
*/

#include<bits/stdc++.h>
using namespace std;

#define all_test_cases int t; scanf("%d", &t); while (t--)

vector<int> ans;

void SOLVE(){
    int D, d, P, Q;
    cin >> D >> d >> P >> Q;

    int temp_ans;
    if(D%d != 0) temp_ans = (D*P) + (d*(((D/d)+1)*(D/d))/2)*Q - (d - D%d)*(D/d)*Q;
    else temp_ans = (D*P) + Q*(d*(((D/d)-1)*(D/d))/2);
    
    ans.push_back(temp_ans);
}

int main()
{   
    all_test_cases SOLVE();

    for(int i=0; i<ans.size(); ++i){
        cout << ans[i];
        if(i < ans.size()-1) cout << "\n";
    }
    
    return 0;
}