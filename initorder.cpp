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

struct A{
    int a = 0;
    A(){
        cout << "A" << '\n';
    }
};
struct B{
    B(){
        cout << "B" << '\n';
    }
};

struct C{
    A a;
    B b;
    C(): b(), a(){
    }
};

A& getA(){
    static A a;
    return a;
}

int main(){
    C c;
    auto a = getA();
    a.a = 1;
    cout << getA().a << '\n';
    decltype(auto) b = getA();
    b.a = 2;
    cout << getA().a << '\n';
    return 0;
}
