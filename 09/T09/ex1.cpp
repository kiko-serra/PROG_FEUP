#include <iostream>

using namespace std;

int main(){
    class C1{
    public:
        C1(int x = 0) : x_(x) {}
        int get_x() const { return x_; }
        void show() { cout << x_; }

    private:
        int x_;
    };
    class C2{
    public:
        C2(const C1 &c, int y = 0) : c_(c), y_(y) {}
        const C1 &get_c() const { return c_; }
        void show() const{
            c_.show();
            cout << '/' << y_;
        }

    private:
        C1 c_;
        int y_;
    return 0;
}