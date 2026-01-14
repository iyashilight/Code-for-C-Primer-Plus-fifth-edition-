#include <iostream>
double Temp_Trans(double x);
int main() {
    double temp;
    std::cout<<"Please enter a Celsius value:"<<std::endl;
    std::cin>>temp;
    std::cout<<temp<<" degrees Celsius is "<<Temp_Trans(temp)<<" degrees Fahrenheit"<<std::endl;
}

double Temp_Trans(double x) {
    return 1.8*x+32.0;
}
