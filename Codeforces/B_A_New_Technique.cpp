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
    int r,c;
    cin>>r>>c;
    int row[r][c];
    int col[c][r];
    for(int i=0;i<r;i++){
        for(int j =0;j<c;j++){
            cin>>row[i][j];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cin>>col[i][j];
        }
    }
    if(c==1){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<col[j][i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
  
    for(int i=0;i<c;i++){
            int j = 0;
        while(true){
            if(col[0][i] == row[j][0]){
                for(int k=0;k<c;k++){
                    cout<<row[j][k]<<" ";
                }
                cout<<"\n";
                break;
            }
            ++j;
            if(j>=c)
                break;    
        }
    }
    


}
int32_t vivek(){
int t;
cin>>t;
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
