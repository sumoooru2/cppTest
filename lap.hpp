#pragma once
#include<chrono>
#ifdef LOCAL
#include"rprint.hpp"
#else
template <class... T> void printl(T&&...){ }
template <class... T> void printc(T&&...){ }
template <class... T> void prints(T&&...){ }
template <class... T> void printd(T&&...){ }
#endif

class Lap{
    std::chrono::high_resolution_clock clk;
    decltype(clk.now()) start;
public:
    void init(){
        start = clk.now();
    }
    template<class T = std::chrono::milliseconds>
    T lap(){
        auto t = clk.now();
        auto ret = t - start;
        start = t;
        return std::chrono::duration_cast<T>(ret);
    }
    // template<class T = std::chrono::milliseconds>
    // long long lap_(T unit = T(1)){
    //     auto t = clk.now();
    //     auto ret = t - start;
    //     start = t;
    //     return ret / unit;
    // }
    template<class F>
    void dur(F f){
        init();
        f();
        prints(lap());
    }
};
