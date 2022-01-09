#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        string S; cin >> S;
        int X, Y; cin >> X >> Y;

        vector<int>  minimumEast(N), minimumWest(N);
        for(int x = 0; x < N; x++){
            if(S[x] == 'E') minimumEast[x] = 0, minimumWest[x] = 2*min(X,Y);
            if(S[x] == 'W') minimumEast[x] = 2*min(X,Y), minimumWest[x] = 0;
            if(S[x] == 'N') minimumEast[x] = min(X,3*Y), minimumWest[x] = min(3*X, Y);
            if(S[x] == 'S') minimumEast[x] = min(3*X,Y), minimumWest[x] = min(X, 3*Y);
        }

        for(int x = 1; x < N; x++) minimumEast[x] += minimumEast[x-1];
        for(int x = N-2; x >= 0; x--) minimumWest[x] += minimumWest[x+1];

        int ans = min(minimumEast[N-1], minimumWest[0]);
        for(int x = 0; x < N-1; x++)
            ans = min(ans, minimumEast[x]+minimumWest[x+1]);
        cout << ans << "\n";
    }
    
    return 0;
}