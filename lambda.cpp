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

int main(){
    map<int, bool> memo;
    vector<int> v(2);
    int& n = v[0];
    auto l = [memo, &n](int i) mutable{
        n++;
        if(memo.count(i)){ prints("memoed", i); return; }
        memo[i] = true;
        prints("first", i);
        prints(n);
    };
    auto l2 = [memo, &n](int i) mutable{
        n++;
        if(memo.count(i)){ prints("memoed", i); return; }
        memo[i] = true;
        prints("first", i);
        prints(n);
    };
    l(4);
    l(3);
    l(3);
    l2(4);
    l2(3);
    l2(3);
    printd(v[0]);
    return 0;
}
