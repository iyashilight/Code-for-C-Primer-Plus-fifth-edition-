#include <iostream>
void Show_T(int x,int y);
int main() {
    int h;
    int m;
    std::cout<<"Enter the number of hours: ";
    std::cin>>h;
    std::cout<<"Enter the number of minutes: ";
    std::cin>>m;
    Show_T(h,m);
}

void Show_T(int x, int y) {
    std::cout<<"Time: "<<x <<":"<< y;
}
