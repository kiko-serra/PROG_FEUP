#ifndef PAIR_H
#define PAIR_H

#include <iostream>

using namespace std;

template<typename T1, typename T2>
class Pair{
    public:
        Pair(const T1& first, const T2& second);
        T1 get_first() const;
        T2 get_second() const;
        void show() const;

    private:
        T1 first_;
        T2 second_;
};

template<typename T1, typename T2>
Pair<T1, T2>::Pair(const T1& first, const T2& second): first_(first), second_(second){}

template<typename T1, typename T2>
T1 Pair<T1, T2>::get_first() const{
    return first_;
}

template<typename T1, typename T2>
T2 Pair<T1, T2>::get_second() const{
    return second_;
}

template<typename T1, typename T2>
void Pair<T1, T2>::show() const{
    cout << "(" << get_first() << "," << get_second() << ")";
}

void sort_by_first(vector<Pair<typename T1, typename T2>>& v){
    sort(v.begin(), v.end(), [](const Pair<T1, T2>& p1, const Pair<T1, T2>& p2));
}

void sort_by_second(vector<Pair<typename T1, typename T2>>& v){
    sort(v.begin(), v.end(), [](const Pair<T1, T2>& p1, const Pair<T1, T2>& p2));
}

void show(const vector<Pair<typename T1, typename T2>>& v){
    cout << "{";
    for(const Pair<T1, T2>& p: v){
        p.show();
    }
    cout << "}"<< endl;
}
#endif