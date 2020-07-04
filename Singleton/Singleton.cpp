#include <iostream>

class SingletonInst {
public:
    void print() {
        std::cout<<"in print func\n";
    }
};

template<typename T>
class Singleton {
public:
    Singleton() = delete;
    virtual ~Singleton() = delete;
    Singleton& operator = (const Singleton& rhs) = delete;
    static T& getInstance() {
        //C++11 for thread safe.
        static T instance;
        return instance;
    }
};

int main() {
    auto inst = Singleton<SingletonInst>::getInstance();
    inst.print();
}