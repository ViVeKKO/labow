#include <bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;} 
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
#define NFS(nitro) ios_base::sync_with_stdio(false);cin.tie(0);
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
#define int long long
#define vivek main
void solve(){
    vector<pair<string,int>> a(634);
    for(int i=0;i<634;i++){
        string x;getline(cin,x);
        a[i] = {x,0};
    }
    for(int j=0;j<634;j++){
       for(int i=0;i<634;i++){
           a[i].second = 0;
       }
        int i = 0;
        int ret = 0;
        if(a[j].first.substr(0,3) == "nop" && stoi(a[j].first.substr(4))!=0){
             a[j].first[0] = 'j';
             a[j].first[1] = 'm';
             a[j].first[2] = 'p';
            while(a[i].second < 1)if(a[i].first.substr(0,3) == "acc"){
                // debug(a[i].first.substr(4));
                ret += stoi(a[i].first.substr(4));
                ++a[i].second;
            if(i == 633){
                // debug(a);
                cout<<ret<<"How"<<"\n";
                return;
            }
            i++;
            }
            else if(a[i].first.substr(0,3) == "nop") {
                if(i == 633){
                    cout<<ret<<"How"<<"\n";
                    return;
                 }   
                ++a[i++].second;
            }
            else{
                a[i].second = true;
                if(i == 633){
                    cout<<ret<<"How"<<"\n";
                    return;
                }
                i+=stoi(a[i].first.substr(4));
            }
             a[j].first[0] = 'n';
             a[j].first[1] = 'o';
             a[j].first[2] = 'p';
        }
        else if(a[j].first.substr(0,3) == "jmp"){
             a[j].first[0] = 'n';
             a[j].first[1] = 'o';
             a[j].first[2] = 'p';
            while(a[i].second < 1){
            if(a[i].first.substr(0,3) == "acc"){
                // debug(a[i].first.substr(4));
                ret += stoi(a[i].first.substr(4));
                ++a[i].second;
            if(i == 633){
                // debug(a);
                cout<<ret<<"How"<<"\n";
                return;
            }
            i++;
            }
            else if(a[i].first.substr(0,3) == "nop") {
                if(i == 633){
                    cout<<ret<<"How"<<"\n";
                    return;
                 }   
                ++a[i++].second;
            }
            else{
                a[i].second = true;
                if(i == 633){
                    cout<<ret<<"How"<<"\n";
                    return;
                }
                i+=stoi(a[i].first.substr(4));
            }
            }
            // debug(a);
            // debug("_______________________");
            //     for(auto i:a)   cout<<i.first<<" "<<i.second<<"\n";

             a[j].first[0] = 'j';
             a[j].first[1] = 'm';
             a[j].first[2] = 'p';
        }
    }

}
int32_t vivek(){
NFS(NITRO);
int t=1;
// cin>>t;
while(t-->0)
    solve();
return 0;
}

// ___.   .__                 __          .__              __    
// \_ |__ |  | _____    ____ |  | _____  _|__|__  __ ____ |  | __
//  | __ \|  | \__  \ _/ ___\|  |/ /\  \/ /  \  \/ // __ \|  |/ /
//  | \_\ \  |__/ __ \   \___|    <  \   /|  |\   /\  ___/|    < 
//  |___  /____(____  /\___  >__|_ \  \_/ |__| \_/  \___  >__|_ \
//      \/          \/     \/     \/                    \/     \/
