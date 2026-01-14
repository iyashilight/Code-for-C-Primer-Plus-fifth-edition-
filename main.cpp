#include <iostream>
void Func_1();
void Func_2();

int main() {
    Func_1();
    Func_1();
    Func_2();
    Func_2();
}

void Func_1() {
    std::cout<<"Three blind mice"<<std::endl;
}

void Func_2() {
    std::cout<<"See how them run"<<std::endl;
}
