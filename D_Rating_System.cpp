//author : Zenith
// 2023-06-29 21:32:21

#include <bits/stdc++.h>
using namespace std;
// #define int long long int

class B{
    public:
        void say(){
            cout << "parent\n";
        }
};
class D : public B{
    public:
        void say(){
            cout << "child\n";
        }
};

int main(){
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}
