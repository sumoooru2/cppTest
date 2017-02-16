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
#include<chrono>
#include<thread>
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

int a = 0, b = 0;
int p[15];
int c = 0;
void func1(){
    auto t1 = thread([](){
            for(int i=0;i<1e9;i++){
                a++;
            }}),
         t2 = thread([](){
            for(int i=0;i<1e9;i++){
                b++;
            }});
    t1.join();
    t2.join();
}
void func2(){
    auto t1 = thread([](){
            for(int i=0;i<1e9;i++){
                a++;
            }}),
         t2 = thread([](){
            for(int i=0;i<1e9;i++){
                c++;
            }});
    t1.join();
    t2.join();
}

void f(){
}
int main(){
    Lap lp;
    lp.dur([](){ func1(); });
    lp.dur([](){ func2(); });
    return 0;
}
