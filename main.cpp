#include <iostream>
double Astr_Light(double x);

int main() {
    double L_Y;
    std::cout<<"Enter the number of the light year: ";
    std::cin>>L_Y;
    std::cout<<L_Y<<" light years = "<<Astr_Light(L_Y)<<" astronomical units."<<std::endl;
}

double Astr_Light(double x) {
    return x*63240;
}
