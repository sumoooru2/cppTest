#include<algorithm>
#include<cmath>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<sstream>
#include<vector>
#include"lap.hpp"
using namespace std;
using uint = unsigned int;
using ll = long long;
const int M = 1e9 + 7;
const ll MLL = 1e18L + 9;
#pragma unused(M)
#pragma unused(MLL)
#ifdef LOCAL
#include"rprint.hpp"
#else
template <class... T> void printl(T&&...){ }
template <class... T> void printc(T&&...){ }
template <class... T> void prints(T&&...){ }
template <class... T> void printd(T&&...){ }
#endif

int arr[1 << 25];

int main(){
    Lap lp;
    vector<int> v(1 << 25);
    iota(v.begin(), v.end(), 0);
    // iota(arr, arr + (1 << 25), 0);
    for(int& i : arr){
        i = 1;
    }
    int ans = 0;
    lp.dur([&](){
            for(int i : v){
                ans += arr[i];
            }
        });
    prints(ans);

    random_shuffle(v.begin(), v.end());
    ans = 0;
    lp.dur([&](){
            for(int i : v){
                ans += arr[i];
            }
        });
    prints(ans);
    return 0;
}
