#include <bits/stdc++.h>
using namespace std;

set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

bool is_vowel(char c){
    return vowels.count(c);
}

int solution(long long n){
    string P, S;
    cin>>S>>P;

    long long ans = 0;
    
    for(int i=0;i<n;i++){
        char Si=(S[i]=='?')? 'c':S[i];
        char Pi=(P[i]=='?')? 'c':P[i];  
    }

    for(int i=0;i<n;i++){
        if(P[i]==S[i]) continue;
        ans += (is_vowel(S[i])!=is_vowel(P[i]))? 1:2;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << solution(n) << "\n";
    }
    return 0;
}