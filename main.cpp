#include<iostream>

int main() {
    float uHeight;
    constexpr float ConFct(1.0/12);
    std::cout<<"Enter your Height___\b\b\b";
    std::cin>>uHeight;
    std::cout<<"Your height is "<<uHeight*ConFct<<" feet";

}